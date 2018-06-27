#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int inf = 1000000000;

int main(void) {
    int N,tmp;
    bool a[inf];
    int ans = 0;
    cin >> N;
    vector<bool> num(inf+1,false);
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        if (num[tmp])ans--;
        else ans++;
        num[tmp] = !num[tmp];
    }
    cout << ans << endl;
    return 0;
}
