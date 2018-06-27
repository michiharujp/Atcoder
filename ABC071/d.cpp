#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i = ((ll) a); i < ((ll) n); i++)
using namespace std;
typedef long long ll;

ll MOD = 1e9 + 7;

int main(void) {
    int N;
    cin >> N;
    string s;
    cin >> s;
    cin >> s;
    ll ans;
    bool tate;
    int first;
    if (s[0] != s[1]) {
        ans = 3;
        first = 1;
        tate = true;
    } else {
        ans = 6;
        first = 2;
        tate = false;
    }
    for (int i = first+1; i < N; i++ ) {
        if (s[i] == s[i-1]) {
            if (tate) ans *= 2;
            else ans *= 3;
            tate = false;
            i++;
        } else {
            if (tate) ans *= 2;
            tate = true;
        }
        ans %= MOD;
    }
    cout << ans << endl;
}
