#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N, M;
    cin >> N >> M;
    int x,y,z;
    ll sum = 0;
    set<ll, greater<ll>> value;
    for(int i=0; i<N; i++) {
        cin >> x >> y >> z;
        value.insert(x + y + z);
    }
    auto mk = value.begin();
    for(int i=0; i<M; i++) {
        sum += *mk;
        mk++;
    }
    cout << sum << endl;
}
