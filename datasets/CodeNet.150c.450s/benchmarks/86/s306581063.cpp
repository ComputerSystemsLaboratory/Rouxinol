#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;

#define ll long long int
#define ld long double
#define reps(i,f,n) for(int i=f;i<n;i++)
#define rep(i,n) reps(i,0,n)
#define m1 cout<<"move1"<<endl
#define m2 cout<<"move2"<<endl
#define m3 cout<<"move3"<<endl
#define m4 cout<<"move4"<<endl


int main(){
    ld N,P,M;
    vector<ll> v(100,0);
    int ans = 0;
    ld sum = 0;
    ld temp;
    while(cin>>N>>M>>P,N+M+P){
        ans = 0;
        sum = 0;
        rep(i,N){
            cin>>v[i];
            sum += v[i];
        }
        if( v[M -1] != 0){
            temp = (ld)(((ld)sum * 100) * ( 100.0 - (ld)P) * 0.01) / (ld)v[M-1];
            ans=(int)(temp);
        }
        else{ 
            ans = 0; 
        } 
        
        cout<<ans<<endl; 
    } 
    
    return 0; 
}