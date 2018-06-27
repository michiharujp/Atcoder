#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    string s;
    int cnt = 0;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '+') cnt++;
        if(s[i] == '-') cnt--;
    }
    cout << cnt << endl;
    return 0;
}
