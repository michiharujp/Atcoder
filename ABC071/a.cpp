#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int x,a,b;
    cin >> x >> a >> b;
    if (abs(x-a) < abs(x-b)) cout << "A" << endl;
    else cout << "B" << endl;
    return 0;
}
