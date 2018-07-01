#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];

    int left=0,right=0,ans=0,sm=0;
    for(int left = 0; left<N; left++) {
        while(right < N) {
            if((sm^A[right]) != (sm+A[right])) break;
            sm+=A[right];
            right++;
        }
        ans+=right-left;
        sm-=A[left];
    }
    cout << ans << endl;
    return 0;
}
