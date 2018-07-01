#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N,C;
    cin >> N >> C;
    int D[C][C];
    for(int i=0; i<C; i++) {
        for(int j=0; j<C; j++) cin >> D[i][j];
    }
    int c[N][N];
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin >> c[i][j];
    }
    int colors[3] = { 1,2,3 };
    int bai = C*(C-1)*(C-2)/6;
    int res = INT_MAX;
    vector<int> memoA(C,0);
    vector<int> memoB(C,0);
    vector<int> memoC(C,0);
    for(int k=0; k<N; k++) {
        for(int l=0; l<N; l++) {
            if((k+l)%3 == 0) memoA[c[k][l]-1]++;
            if((k+l)%3 == 1) memoB[c[k][l]-1]++;
            if((k+l)%3 == 2) memoC[c[k][l]-1]++;
        }
    }
    vector<pair<int, int> > lineA;
    vector<pair<int, int> > lineB;
    vector<pair<int, int> > lineC;
    for(int i=0; i<C; i++) {
        if(memoA[i] != 0) lineA.push_back(make_pair(i+1, memoA[i]));
        if(memoB[i] != 0) lineB.push_back(make_pair(i+1, memoB[i]));
        if(memoC[i] != 0) lineC.push_back(make_pair(i+1, memoC[i]));
    }

    for(int i=0; i<bai; i++) {
        for(int j=0; j<3; j++) {
            int cost = 0;
            for(auto cst : lineA) cost += D[cst.first-1][colors[j%3]-1] * cst.second;
            for(auto cst : lineB) cost += D[cst.first-1][colors[(j+1)%3]-1] * cst.second;
            for(auto cst : lineC) cost += D[cst.first-1][colors[(j+2)%3]-1] * cst.second;
            res = min(res,cost);
        }
        if(colors[2] != C) colors[2]++;
        else if(colors[1] != C-1) { colors[1]++;  colors[2] = colors[1]+1; }
        else { colors[0]++; colors[1] = colors[0]+1; colors[2] = colors[1]+1; }
    }
    cout << res << endl;
    return 0;
}
