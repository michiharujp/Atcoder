#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N,K,x;
    int ans = 0;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        cin >> x;
        ans += x < abs(K - x) ? x : abs(K - x);
    }
    cout << ans * 2 << endl;
    return 0;
}
