#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ll N;
    cin >> N;
    ll A[N], B[N], C[N];
    for (int i=0; i<N; i++) cin >> A[i];
    for (int i=0; i<N; i++) cin >> B[i];
    for (int i=0; i<N; i++) cin >> C[i];
    sort(A, A+N);
    sort(B, B+N);
    sort(C, C+N);
    int k=0;
    ll mem[N];
    for (int i=0; i<N; i++) mem[i] = 0;
    for (int i=0; i<N; i++) {
        while (true) {
            if (k == N) break;
            if (B[i] < C[k]) {
                mem[i] = N - k;
                break;
            }
            k++;
        }
    }
    for (int i=N-1; i>0; i--) mem[i-1] += mem[i];
    k = 0;
    ll ans = 0;
    for (int i=0; i<N; i++) {
        while (true) {
            if (k == N) break;
            if (A[i] < B[k]) {
                ans += mem[k];
                break;
            }
            k++;
        }
    }
    cout << ans << endl;
    return 0;
}
