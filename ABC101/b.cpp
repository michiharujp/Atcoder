#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ll N;
    ll S = 0;
    cin >> N;
    ll tmp = N;
    while(tmp) {
        S += tmp % 10;
        tmp /= 10;
    }
    if(N % S == 0) {
        cout << "Yes" << endl;;
    } else cout << "No" << endl;
    return 0;
}
