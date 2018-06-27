#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int s(int num) {
    int res = 0;
    while(num) {
        res += num % 10;
        num /= 10;
    }
    return res;
}

int main(void) {
    int K;
    cin >> K;
    int n=1, d=1;
    for (int i=1; i<K; i++) {
        if(s(n+d) * (n+d*10) < s(n+d*10) * (n+d)) d *= 10;
        n+= d;
        cout << n << endl;
    }
    return 0;
}
