/*
    Vora Mahammadasim
*/

#include<bits/stdc++.h>
#include<stdio.h>
#define int long long
#define pb emplace_back
#define Mod 1000000007
#define all(a) a.begin(),a.end()
#define ps(a) partial_sum(all(a),a.begin())
using namespace std;

const int N = 2e5 + 5;
int n,a[N]={0};

signed main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i =1 ;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                a[i*i + j*j + k*k + i*j + j*k + k*i]++;
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<'\n';
}
