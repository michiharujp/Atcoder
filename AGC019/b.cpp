#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getSize(ll n) {
    return n * (n-1) / 2;
}

int main(void) {
    int tmp;
    ll ans = 0;
    string s;
    vector<ll> alp(26,0);
    cin >> s;
    for (ll i=0; i<s.size(); i++) {
        tmp = (int)s[i] - (int)'a';
        alp[tmp]++;
    }
    for (int i=0; i<26; i++) {
        ans += getSize(alp[i]);
    }
    cout << getSize(s.size()) - ans + 1 << endl;
    return 0;
}
