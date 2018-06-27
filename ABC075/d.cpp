#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,n) for(ll i=(a); i<(ll)(n); i++)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(v) (v).begin(), (v).end()

int main(void) {
    int N,K;
    cin >> N >> K;
    vector<ll> x(N), y(N);
    vector<ll> xary, yary;
    for (int i=0; i<N; i++) {
        cin >> x[i] >> y[i];
        xary.push_back(x[i]);
        yary.push_back(y[i]);
    }

    sort(ALLOF(xary));
    sort(ALLOF(yary));

    ll ans = 1LL * (xary[N-1] - xary[0]) * (yary[N-1] - yary[0]);

    for (int xi=0; xi<N; xi++)
        for (int xj=xi+1; xj<N; xj++)
            for (int yi=0; yi<N; yi++)
                for (int yj=yi+1; yj<N; yj++) {
                    int num = 0;
                    ll ux = xary[xi], dx = xary[xj];
                    ll uy = yary[yi], dy = yary[yj];
                    for (int i=0; i<N; i++)
                        if (ux <= x[i] and x[i] <= dx and uy <= y[i] and y[i] <= dy) num++;
                    if (num >= K) ans = min(ans, 1LL * (dx - ux) * (dy - uy));
                }

    cout << ans << endl;
    return 0;
}
