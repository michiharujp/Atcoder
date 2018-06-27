#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ll X,t,ans;
    cin >> X >> t;
    ans = X - t >= 0 ? X - t : 0;
    cout << ans << endl;
    return 0;
}
