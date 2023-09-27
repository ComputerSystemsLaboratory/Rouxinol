#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char bef[1000001],aft[10000001],word[100000001];
int main(){
    int n,m;
    while(cin>>n,n){
        for(int i=0;i<n;i++){
            cin>>bef[i]>>aft[i];
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>word[i];
            for(int j=0;j<n;j++){
                if(bef[j]==word[i]){
                    word[i]=aft[j];
                    break;
                }
            }
        }
        cout<<word<<endl;
    }
}