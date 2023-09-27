#include<bits/stdc++.h>
using namespace std;
#define INF 999999999
typedef long long int Int;
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
vector<pair<char,Int>> A;
vector<pair<char,Int>> B;
int N;
int partition(int p,int r){
    int x = A[r].second;
    int i = p-1;
    for(int j=p;j<r;j++){
        if(A[j].second<=x){
            i = i+1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;    
}
void quicksort(int p,int r){
    if(p<r){
        int q = partition(p,r);
        quicksort(p,q-1);
        quicksort(q+1,r);
    }
}


int main(){
    cin >> N;
    A.resize(N);
    
    for(auto &i:A) cin >> i.first >> i.second;
    map<int,string> m1,m2;
    rep(i,N) m1[A[i].second] += A[i].first;
    quicksort(0,N-1);
    rep(i,N) m2[A[i].second] += A[i].first;
    bool flag = 1;
    for(int i=0;i<N;i++) flag&=m1[A[i].second]==m2[A[i].second];
    if(flag) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    rep(i,N){
        cout << A[i].first << " " << A[i].second << endl;
    }

}
