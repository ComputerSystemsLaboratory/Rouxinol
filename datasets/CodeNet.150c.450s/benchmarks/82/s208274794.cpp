#include <bits/stdc++.h>
using namespace std;

struct Dice{
        vector<int>A;
        int t;
        void North(vector<int>&A){
            t=A[1],A[1]=A[2],A[2]=A[6],A[6]=A[5],A[5]=t;
        }
        void South(vector<int>&A){
            t=A[1],A[1]=A[5],A[5]=A[6],A[6]=A[2],A[2]=t;
        }
        void East(vector<int>&A){
            t=A[1],A[1]=A[4],A[4]=A[6],A[6]=A[3],A[3]=t;
        }
        void West(vector<int>&A){
            t=A[1],A[1]=A[3],A[3]=A[6],A[6]=A[4],A[4]=t;
        }
        void Spin(vector<int>&A){
            t=A[2],A[2]=A[3],A[3]=A[5],A[5]=A[4],A[4]=t;
        }
};
    
int main(){
    vector<int>N(7);
    for(int i=1;i<7;i++) cin>>N[i];
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a,b;cin >>a>>b;
        Dice d;
        while(N[1]!=a){
            d.North(N);
            if(N[1]!=a) d.East(N);
        }
        while(N[2]!=b) d.Spin(N);
    
        cout << N[3] << endl;
    }
}
