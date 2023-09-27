#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,r;
    while(cin>>n>>r,r){
        int a,b;
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(n-i-1);
        }
        for(int x:v){
                //cout <<x<<" ";
            }
            //cout<<endl;
        for(int i=0;i<r;i++){
            cin>>a>>b;
            vector<int> tmp=v;
            for(int j=0;j<a-1;j++){
                for(int k=0;k<n;k++){
                    if(tmp[k]==j){
                        v[k]+=b;
                    }
                }
            }
            for(int j=0;j<b;j++){
                for(int k=0;k<n;k++){
                    if(tmp[k]==j+a-1){
                        v[k]-=a-1;
                    }
                }
            }
            for(int x:v){
                //cout <<x<<" ";
            }
            //cout<<endl;
            
        }
        for(int i=0;i<n;i++){
            if(v[i]==0)cout<<i+1<<endl;
        }
    }
}