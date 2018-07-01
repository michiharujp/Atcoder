#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector<int> w(N,0);
    vector<int> e(N,0);
    string S;
    cin >> S;
    if(S[0] == 'W') w[0] = 1;
    for(int i=1; i<N; i++) {
        if(S[i] == 'W') w[i] = w[i-1] + 1;
        else w[i] = w[i-1];
    }
    if(S[N-1] == 'E') e[N-1] = 1;
    for(int i=N-2; i>=0; i--) {
        if(S[i] == 'E') e[i] = e[i+1] + 1;
        else e[i] = e[i+1];
    }
    int ans = INT_MAX;
    for(int i=0; i<N; i++) ans = min(ans, w[i]+e[i]-1);
    cout << ans << endl;
    return 0;
}
