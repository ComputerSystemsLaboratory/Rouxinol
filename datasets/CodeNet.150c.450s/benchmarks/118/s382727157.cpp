/*
螟ァ螳カ螂ス螂ス逵倶ク倶ク矩擇逧?サ」遐√?
*/

#include <cstdio>
#include <iostream>
using namespace std;

int dp[1002][12][22];

void Init(){
    int cnt= 0;
    dp[1000][1][1]= cnt++;
    for(int i=999; i>0; --i){
        for(int j=10; j>0; --j){
            int k= 20;
            if( i%3!=0 && j%2==0 ) k= 19;  //蟷エ莉ス%3!=0蜷梧慮譛井サス%2==0逧?弍蟆乗怦;
            for(; k>0; --k)
                dp[i][j][k]= cnt++;
        }
    }
}

int main()
{
    //freopen("A.in","r",stdin);
    Init();
    int T;
    cin>>T;
    while(T--){
        int y,m,d;
        cin>>y>>m>>d;
        cout<< dp[y][m][d] <<endl;
    }
}