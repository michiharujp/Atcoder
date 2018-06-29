#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,a,n) for(ll i=(a); i<(ll)(n); i++)
#define ALLOF(v) (v).begin(), (v).end()

int N,M;
vector< vector<int> > st(51, vector<int> (51));
vector<bool> visit(51);
int ans = 0;
bool del[51][51];

void dfs(int n) {
    visit[n] = true;
    for (auto i : st[n]) if (!visit[i] && del[n][i]) dfs(i);
}

int main(void) {
    cin >> N >> M;
    int at,bt,a[M],b[M];
    for (int i=0; i<M; i++) {
        cin >> at >> bt;
        a[i] = at-1; b[i] = bt-1;
        st[a[i]].push_back(b[i]);
        st[b[i]].push_back(a[i]);
        del[a[i]][b[i]] = true;
        del[b[i]][a[i]] = true;
    }

    for (int i=0; i<M; i++) {
        del[a[i]][b[i]] = false; del[b[i]][a[i]] = false;
        for (int j=0; j<N; j++) visit[j] = false;
        dfs(0);
        for (int j=0; j<N; j++) {
            if (!visit[j]) {
                ans++;
                break;
            }
        }
        del[a[i]][b[i]] = true; del[b[i]][a[i]] = true;
    }
    cout << ans << endl;
    return 0;
}
