#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    int l,r;
    int ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> l >> r;
        ans += (r - l + 1);
    }
    cout << ans << endl;
    return 0;
}
