#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    while(cin>>N && N){
        int a[21][21]={};
        for(int i=0;i<N;i++){
            int x,y;
            cin>>x>>y;
            a[y][x]=1;
        }
        int M;
        cin>>M;
        int x=10,y=10;
        for(int i=0;i<M;i++){
            int z;
            char h;
            cin>>h>>z;
            for(int k=0;k<z;k++){
                if(h=='E'){
                    x++;
                }else if(h=='W'){
                    x--;
                }else if(h=='N'){
                    y++;
                }else{
                    y--;
                }
                a[y][x]=0;
            }
        }
        int count=0;
        for(int i=0;i<21;i++){
            for(int j=0;j<21;j++){
                count+=a[i][j];
            }
        }
        if(count==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}

