#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mod 1000000007
#define fo(i,n) for(int i=0;i<n;i++)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
typedef long long ll;

void print_Array(int arr[],int start,int end){
    for(int i=start;i<end;i++){
        printf("%d ",arr[i]);
    }
}

void test(){
    ll p,q,x,y,s,l,r,m,n;
    int N,K;
    cin>>N;
    vector<ll> A;
    fo(i,N){
        cin>>p;
        A.push_back(p);
    }
    string S;
    cin>>S;
    set<ll> ltr_moves;
    for(int i=N-1;i>=0;i--){
        x=A[i];
        for(auto it=ltr_moves.rbegin();it!=ltr_moves.rend();it++){
            x=min(x,x^(*it));
        }
        if(x==0) continue;
        if(S[i]=='0'){ ltr_moves.insert(x);}
        else{
            puts("1");
            return;
        }
    }
    puts("0");
}

int main(){
    int p,q,x,y,s,l,r,m,n;
    int N,K;
    int t;
    scanf("%d",&t);
    while(t--){
        test();
    }
    return 0;
}

