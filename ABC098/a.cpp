#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int A,B,res=INT_MIN;
    cin >> A >> B;
    res = max(A+B,res);
    res = max(A-B,res);
    res = max(A*B,res);
    cout << res << endl;
    return 0;
}
