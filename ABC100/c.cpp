#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    cin >> N;
    vector<ll> a(N);
    int cnt;
    ll fac, memofac;
    int memocnt;
    int sum = 0;
    for (int i=0; i<N; i++) cin >> a[i];
    for (int i=0; i<N; i++) {
        cnt = 0;
        while(a[i] % 2 == 0) {
            memocnt = 1;
            fac = 2;
            while(true) {
                memofac = fac;
                fac = fac * fac;
                if(a[i] % fac != 0) break;
                memocnt *= 2;
            }
            a[i] /= memofac;
            cnt += memocnt;
        }
        sum += cnt;
    }
    cout << sum << endl;
    return 0;
}
