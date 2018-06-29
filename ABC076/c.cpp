#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    bool get = false;
    int st;
    string s,t;
    cin >> s;
    cin >> t;
    for (int i=s.size()-t.size(); i >= 0; i--) {
        for (int j=0; j<t.size(); j++) {
            if (s[i+j] == t[j] || s[i+j] == '?') get = true;
            else {
                get = false;
                break;
            }
        }
        if (get) {
            st = i;
            break;
        }
    }
    if (!get) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    for (int i=0; i<t.size(); i++) s[st+i] = t[i];
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '?') cout << 'a';
        else cout << s[i];
    }
    cout << endl;
    return 0;
}
