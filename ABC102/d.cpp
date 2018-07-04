#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    int N;
    cin >> N;
    ll A[N],B[N];
    ll P,Q,R,S;
    // 累積和
    for(int i=0; i<N; i++) cin >> A[i];
    B[0] = A[0];
    for(int i=1; i<N; i++) B[i] = B[i-1] + A[i];
    ll absL, absR, memoL, memoR;
    ll res = LLONG_MAX;
    int left=0,right=2;
    // 分割の位置
    for(int center=1; center<N-2; center++) {
        if(right == center) right++;
        if(left == center) left--;

        while(left < center) {
            P = B[left];
            Q = B[center] - B[left];
            memoL = absL;
            absL = Q - P;
            if(absL < 0 && left > 0) {
                left--;
                if(abs(memoL) < abs(absL)) {
                    P = B[left];
                    Q = B[center] - B[left];
                }
                break;
            }
            if(left < center-1) left++;
            else break;
        }
        while(right < N) {
            R = B[right] - B[center];
            S = B[N-1] - B[right];
            memoR = absR;
            absR = S - R;
            if(absR < 0 && right > center + 1) {
                right--;
                if(abs(memoR) < abs(absR)) {
                    R = B[right] - B[center];
                    S = B[N-1] - B[right];
                }
                break;
            }
            if(right < N-2) right++;
            else break;
        }

        ll ax = max(P,Q);
        ax = max(ax, R);
        ax = max(ax, S);
        ll ix = min(P,Q);
        ix = min(ix, R);
        ix = min(ix, S);
        res = min(res, ax - ix);
    }
    cout << res << endl;
    return 0;
}
