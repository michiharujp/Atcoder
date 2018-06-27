#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N, K;
    cin >> N >> K;
    int A[N];
    int memo;
    for (int i=0; i<N; i++) cin >> A[i];
    cout << ((N-1)+(K-2))/(K-1) << endl;
    return 0;
}
