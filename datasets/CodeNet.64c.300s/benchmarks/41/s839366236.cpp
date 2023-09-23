#include <bits/stdc++.h>
#define rep(i,n) for (int i=1; i<=(n); i++)
typedef long long ll;
using namespace std;
int H;
int A[2000000];

//iは１～Hのインデックス番号
void maxHeapify(int i){
    int left,right,big;//最初はbig=最初のインデックス番号、最終的にbig=自分、左の子、右の子の中で最も大きい値をもつインデックス番号に変わる
    //つまり、最終的なbigにはより小さい値に変化する、故にさらにmaxHeapifyをする再帰型にする必要がある！
    left=2*i;
    right=2*i+1;
    
    if(left<=H && A[left]>A[i]) big=left;
    else big=i;
    if(right<=H && A[right]>A[big]) big=right;
    
    if(big!=i){
        swap(A[big],A[i]);
        maxHeapify(big);
    }
}


int main(){
    cin >> H;
    rep(i,H) cin >> A[i];
    
    for (int i=H/2; i>=1; i--) maxHeapify(i);
    rep(i,H) cout << " " << A[i];
    cout << endl;
    return 0;
}
