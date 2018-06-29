#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> length;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<ll>());
    for (int i = 1; i < N; i++) {
        if (A[i] == A[i-1]) {
            length.push_back(A[i]);
            i++;
        }
        if (length.size() == 2) break;
    }
    if (length.size() == 2) cout << length[0]*length[1] << endl;
    else cout << 0 << endl;
    return 0;
}
