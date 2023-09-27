#include<iostream>
#include<string>
using namespace std;
#define MAXS 1000

int DP[MAXS+1][MAXS+1];

int main(){
    string s1,s2;cin>>s1>>s2;
    int a=s1.size(),b=s2.size();
    for(int i=0;i<=a;i++){
        DP[i][0]=i;
    }
    for(int j=0;j<=b;j++){
        DP[0][j]=j;
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            DP[i][j]=0;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            DP[i+1][j+1]=min(DP[i+1][j],DP[i][j+1])+1;
            DP[i+1][j+1]=min(DP[i+1][j+1],DP[i][j]+(s1[i]==s2[j]?0:1));
        }
    }
    cout<<DP[a][b]<<endl;
    return 0;
}

