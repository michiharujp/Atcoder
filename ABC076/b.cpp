#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N,K;
    cin >> N >> K;
    int ans = 1;
    for (int i=0; i<N; i++) {
        if (ans < K) ans *= 2;
        else ans += K;
    }
    cout << ans << endl;
    return 0;
}
