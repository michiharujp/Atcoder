#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int D, N;
    cin >> D >> N;
    if (N == 100) N++;
    cout << N;
    for (int i=0; i<D; i++) cout << "00";
    cout << endl;
    return 0;
}
