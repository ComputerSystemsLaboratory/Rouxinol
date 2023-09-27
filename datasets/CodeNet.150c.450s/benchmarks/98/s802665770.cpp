#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<complex>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<sstream>
#include<iostream>
using namespace std;
int main(void){

    int n,m;
    while(cin>>n>>m,n|m){
        int s[1000],t[1000];
        int S = 0,T = 0;
        for(int i = 0;i < n;i++)cin>>s[i],S+=s[i];
        for(int i = 0;i < m;i++)cin>>t[i],T+=t[i];
        int best = 100000,a = -1,b = -1;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                int A = S - s[i] + t[j];
                int B = T - t[j] + s[i];
                if(A == B){
                    if(best > s[i] + t[j]){
                        a = i,b = j,best = s[i] + t[j];
                    }
                }
            }
        }
        if(a == -1)cout<<-1<<endl;
        else cout<<s[a]<<" "<<t[b]<<endl;

    }


    return 0;
}