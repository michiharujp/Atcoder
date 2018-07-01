#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    int res = N;
    for(int i=0; i<=N; i++) {
        int cc = 0;
        int t = i;
        while(t>0) cc+=t%6, t/=6;
        t = N - i;
        while(t>0) cc+=t%9, t/=9;
        if(res>cc) res = cc;
    }
    cout << res << endl;
    return 0;
}
