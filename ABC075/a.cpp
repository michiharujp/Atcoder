#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,n) for(ll i=(a); i<(ll)(n); i++)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(v) (v).begin(), (v).end()

int main(void) {
    int A,B,C;
    cin >> A >> B >> C;
    int ans;
    if (A == B) ans = C;
    else if (A == C) ans = B;
    else ans = A;
    cout << ans << endl;
    return 0;
}
