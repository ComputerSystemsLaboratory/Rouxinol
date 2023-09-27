#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
#include <math.h>
#include <sstream>

using namespace std;
int main(void){
    while(true){
        int n,a,b,c,x;
        cin>>n>>a>>b>>c>>x;
        if(n==0&&a==0&&b==0&&c==0&&x==0)break;
        int in[n];
        for(int i=0;i<n;i++)cin>>in[i];
        int cnt=0,sw=0;
        while(true){
            if(x==in[sw])sw++;
            if(sw==n)break;
            x=(a*x+b)%c;
            if(cnt==10001)break;
            cnt++;
        }
        if(cnt==10001)cout<<"-1\n";
        else cout<<cnt<<endl; 
    }
    return 0;
}