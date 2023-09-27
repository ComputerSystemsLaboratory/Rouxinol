#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int n,m;
    char befor[1000],after[1000],pu;
    while(1){
        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>befor[i]>>after[i];
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>pu;
            for(int j=0;j<n;j++){
                if(befor[j]==pu){
                        pu=after[j];
                        break;
                }
            }
            cout<<pu;
        }
        cout<<endl;
    }
}