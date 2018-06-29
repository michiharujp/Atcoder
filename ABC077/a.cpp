#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    char c[2][3];
    cin >> c[0];
    cin >> c[1];
    if (c[0][0] == c[1][2] && c[0][1] == c[1][1] && c[0][2] == c[1][0]) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
