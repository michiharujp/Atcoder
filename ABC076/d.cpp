#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double ans = 0;
int N;
int t[210];
int v[110];
vector<tuple<int, int, int> > vc;

double get(int s, int f, int tos, int tof, int his, int hif) {
    int range = f-s;
    int height = hif - his;
    if (range < (height)*2) return height * range / 2;
    else if (s+height < tos)
        return (range - height) * height;
}

int main(void) {
    int tm=0;
    int tmp=0;
    cin >> N;
    t[0] = 0;
    for (int i=1; i<=N; i++) {
        cin >> tm;
        t[i] = tm + tmp;
        tmp = t[i];
    }
    for (int i=0; i<N; i++) cin >> v[i];
    vc.push_back(make_tuple(0,0,t[N-1]));
    for (int i=0; i<N; i++) vc.push_back(make_tuple(v[i],t[i],t[i+1]));
    sort(vc.begin(), vc.end());
    return 0;
}
