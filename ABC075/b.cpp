#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,n) for(ll i=(a); i<(ll)(n); i++)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(v) (v).begin(), (v).end()

int main(void) {
    int H,W;
    cin >> H >> W;
    char s[H][W];
    int ans[H][W];
    for (int i=0; i<H; i++) cin >> s[i];
    for (int i=0; i<H; i++) for (int j=0; j<W; j++) ans[i][j] = 0;
    for (int i=0; i<H; i++) for (int j=0; j<W; j++) {
        if (s[i][j] == '#') {
            for (int k=i-1; k<=i+1; k++) for (int l=j-1; l<=j+1; l++) {
                if (k == -1 || k == H || l == -1 || l == W) continue;
                ans[k][l]++;
            }
        }
    }
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (s[i][j] == '#' ) cout << "#";
            else if (s[i][j] == '.') cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
