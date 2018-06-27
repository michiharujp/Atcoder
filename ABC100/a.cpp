#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int A, B;
    cin >> A >> B;
    if (max(A,B) <= 8) cout << "Yay!" << endl;
    else cout << ":(" << endl;
    return 0;
}
