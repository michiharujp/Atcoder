#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    string S;
    cin >> N;
    cin >> S;
    int res=0;
    for(int pp=0; pp<N; pp++) {
        vector<bool> left(26,false);
        vector<bool> right(26,false);
        for(int i=0; i<pp; i++) left[(int)(S[i] - 'a')] = true;
        for(int i=pp; i<N; i++) right[(int)(S[i] - 'a')] = true;
        int sum=0;
        for(int i=0; i<26; i++) if(left[i] && right[i]) sum++;
        res = max(res, sum);
    }
    cout << res << endl;
    return 0;
}
