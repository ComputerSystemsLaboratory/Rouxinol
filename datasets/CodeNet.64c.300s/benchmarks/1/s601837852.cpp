#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n+1); ++i)
using namespace std;
using ll = long long;
const int INF = +100100100;
typedef pair<int,int> P;


int partition(vector<int> &A, int p, int r){
    int x = A[r];
    int i = p-1; int j = p-1;
    while(j<r){
        // ポインタが加算する形で比較するときはポインタの場所で比較すべき。
        if(A[j+1]>x)++j;
        else{
            swap(A[i+1],A[j+1]);
            ++i;++j;
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

int partition_ans(vector<int> &A, int p, int r){
    int x = A[r];
    int i = p-1; int j = p;
    while(j<r){
        // ポインタが加算する形で比較するときはポインタの場所で比較すべき。
        if(A[j]<=x){
            swap(A[i+1],A[j]);
            ++i;
        }
        ++j;
    }
    swap(A[i+1],A[r]);
    return i+1;
}



int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    int r = partition_ans(a, 0, n-1);
    rep(i,n){
        if(i)cout<<" ";
        if(i==r)cout<<"[";
        cout<<a[i];
        if(i==r)cout<<"]";
    }
    cout<<endl;
    return 0;
}
