#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(void) {
    string s;
    cin >> s;
    set<char> c;
    for (int i=0; i<s.size(); i++) {
        c.insert(s[i]);
    }
    if ( c.size() == 26) {
        cout << "None" << endl;
        return 0;
    }
    char tmp = 'a';
    auto itr = c.begin();
    for (auto itr = c.begin(); itr != c.end(); ++itr) {
        if (tmp != *itr) {
            cout << tmp << endl;
            return 0;
        }
        tmp++;
    }
    cout << tmp << endl;
    return 0;
}
