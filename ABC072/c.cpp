#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N,tmp;
    int a[100000];
    int ans=1;
    cin >> N;
    for (int i=0; i<N; i++) a[i] = 0;
    for (int i=0; i<N; i++) {
        cin >> tmp;
        a[tmp]++;
    }
    for (int i=0; i<N-2; i++) ans = max(ans, a[i]+a[i+1]+a[i+2]);
    cout << ans << endl;
    return 0;
}
