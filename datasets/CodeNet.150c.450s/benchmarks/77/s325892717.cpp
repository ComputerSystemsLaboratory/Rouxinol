#include <bits/stdc++.h>
using namespace std;

void slove(int n){
    vector<vector<bool>> m;
    vector<bool> tmp(21,true);
    for(int i=0;i<21;i++){
        m.push_back(tmp);
    }
    int a,b,x=10,y=10;
    char c;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        m[b][a]=false;
    }
    m[10][10]=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> c >> a;
        if(c=='E'){
            for(int j=0;j<a;j++){
                m[y][x+j+1]=true;
            }
            x+=a;
        }
        if(c=='W'){
            for(int j=0;j<a;j++){
                m[y][x-j-1]=true;
            }
            x-=a;
        }
        if(c=='N'){
            for(int j=0;j<a;j++){
                m[y+j+1][x]=true;
            }
            y+=a;
        }
        if(c=='S'){
            for(int j=0;j<a;j++){
                m[y-j-1][x]=true;
            }
            y-=a;
        }
    }

    for(int i=0;i<=20;i++){
        for(int j=0;j<=20;j++){
            if(!m[i][j]){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
    return;
}

int main(void){
    int n;
    while(cin>>n,n){
        slove(n);
    }
}