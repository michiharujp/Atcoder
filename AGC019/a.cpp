#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll val[4],N,memo;
int key;

void getMin(int limit) {
    memo = val[0];
    key = 0;
    for (int i = 1; i < limit; i++) {
        if (memo * pow(2, 3 - key) > val[i] * pow(2, 3 - i)) {
            memo = val[i];
            key = i;
        }
    }
}

int main(void) {
    ll vol,num;
    ll ans = 0;;
    for (int i = 0; i < 4; i++) cin >> val[i];
    cin >> N;
    N *= 4;
    key = 4;
    while (N != 0) {
        getMin(key);
        vol = pow(2, key);
        num = N / vol;
        N -= vol * num;
        ans += memo * num;
    }
    cout << ans << endl;
    return 0;
}
