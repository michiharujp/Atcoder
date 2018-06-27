#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N,tmp,ans = 0;
    bool isPair = false;
    bool isCorr;
    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> tmp;
        isCorr = (tmp == i);
        if (isCorr && !isPair) { ans++; isPair = true; }
        else isPair = false;
    }
    cout << ans << endl;
    return 0;
}
