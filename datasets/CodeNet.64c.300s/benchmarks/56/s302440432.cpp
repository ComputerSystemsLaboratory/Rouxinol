#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std;
int hiniti(int y,int m,int d){
    int result=0;
    for(int s=1;s<=y;s++){
        for(int j=1;j<=10;j++){
            if(y==s&&m==j){
                return result+=d;
            }
            if(s%3==0){
                result+=20;
            }else{
                if(j%2==0){
                    result+=19;
                }else{
                    result+=20;
                }
            }
        }
    }
}
int main(void){
    int n;
    cin>>n;
    int y,m,d;
    for(int s=0;s<n;s++){
        cin>>y>>m>>d;
        int t=hiniti(y, m, d);
        cout<<196471-t<<endl;
    }
    return 0;
}