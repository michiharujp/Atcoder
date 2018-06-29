#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ll N;
    ll ans = 0;
    int i = 0;
    cin >> N;
    while (true) {
        i++;
        ans = i * i;
        if (N < ans) break;
    }
    cout << (i-1)*(i-1) << endl;
    return 0;
}
