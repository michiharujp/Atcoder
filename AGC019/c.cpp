#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll stx,sty,gox,goy,N;
map<ll,ll> fn;
map<ll,ll>::iterator it;
vector<ll> lis;

int main(void) {
    double ans;
    ll fnx,fny,tmp;
    ll num = 0;;
    cin >> stx >> sty >> gox >> goy >> N;
    if (sty > goy) {
        swap(stx, gox);
        swap(sty, goy);
    }
    ll xmax = max(stx, gox);
    ll xmin = min(stx, gox);
    for (ll i=0; i<N; i++) {
        cin >> fnx >> fny;
        if (fnx < xmin || xmax < fnx) continue;
        if (sty > fny || fny > goy) continue;
        fn.insert(make_pair(fnx, fny));
    }
    lis.push_back(-1);
    for (it = fn.begin(); it != fn.end(); it++) {
        tmp = it->second;
        if (lis[num] < tmp ) {
            lis.push_back(tmp);
            num++;
        } else *lower_bound(lis.begin(), lis.end(), tmp) = tmp;
    }
    ll shrt = min(abs(stx - gox), abs(sty - goy)) + 1;
    ll sec = abs(stx - gox) + abs(sty - goy);
    if (num == shrt) ans = (double)100 * sec - (20 - 5 * M_PI) * (num - 1) + (10 * M_PI - 10);
    else ans = (double)100 * sec - (20 - 5 * M_PI) * num;
    printf("%.15f\n", ans);
    return 0;
}
