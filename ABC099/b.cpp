#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a,b,res,diff;
    cin >> a >> b;
    diff = b - a;
    res = (1+diff)*diff / 2 - b;
    cout << res << endl;
    return 0;
}
