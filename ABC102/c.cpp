#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    cin >> N;
    vector<ll> A(N);
    ll mm;
    for(int i=0; i<N; i++) {
        cin >> mm;
        A[i] = (mm-1-i);
    }
    sort(A.begin(), A.end());
    ll b;
    if(A.size() % 2 == 0) b = (A[N/2] + A[N/2-1]) / 2;
    else b = A[N/2];
    ll sm = 0;
    for(int i=0; i<N; i++) sm += abs(A[i] - b);
    cout << sm << endl;
    return 0;
}
