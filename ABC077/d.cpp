#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int m[10][10];
    for (int i=0; i<10; i++) for (int j=0; j<10; j++) {
        int tmp = i * j;
        m[i][j] = ( (tmp / 10) + (tmp % 10) )-i;
    }
    ll K;
    cin >> K;
    int d[100000];
    int p = -1;
    while (K != 0) {
        p++;
        d[p] = K % 10;
        K /= 10;
    }
    int num = 1;
    int mi = -1;

    while(mi < 0) {
        mi = 0;
        int k = 0;
        for (int i=0; i<=p; i++) {
            int a = d[i] * num + k;
            d[i] = a % 10;
            k = a / 10;
        }
        if (k != 0) {
            d[p+1] = k;
            p++;
        }
        for (int i=1; i<10; i++) {
            int diff = 0;
            for (int j=0; j<=p; j++) {
                diff += m[d[j]][i];
            }
            if (mi > diff) {
                num = i;
                mi = diff;
            }
        }
    }
    ll ans;
    for (int i=0; i<=p; i++) {
        ans += d[i];
        cout << d[i] << " ";
    }
    cout << endl;
    cout << ans << endl;
    return 0;
}
