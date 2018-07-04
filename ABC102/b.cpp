#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    cin >> N;
    ll A[N];
    ll res=0;
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N-1; i++) {
        for(int j=i; j<N; j++) {
            res = max(res,abs(A[i] - A[j]));
        }
    }
    cout << res << endl;
    return 0;
}
