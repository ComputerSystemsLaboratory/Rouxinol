#include <bits/stdc++.h>
#define rep(i,n) for (int i=1; i<=(n); i++)
typedef long long ll;
using namespace std;

//iは１～Hのインデックス番号

//これらはインデックス番号を返してるだけ
int parent(int i){
    return i/2;
}
//インデックス番号Hを超えることはありえない
int left_child(int i){
    return i*2;
}

int right_child(int i){
    return i*2+1;
}

int main(){
    int H; cin >> H;
    vector <int> A(H+1);
    rep(i,H) cin >> A[i];
    
    rep(i,H){
        cout << "node " << i << ": " << "key = " << A[i] << ", ";
        if(parent(i)>=1) cout << "parent key = " << A[parent(i)] << ", ";
        if(left_child(i)<=H) cout << "left key = " << A[left_child(i)] << ", ";
        if(right_child(i)<=H) cout <<"right key = " << A[right_child(i)] <<", ";
        cout << endl;
        
    }
}
