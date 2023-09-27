#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
#include <math.h>
#include <sstream>
int const Max=1000000;
using namespace std;
int main(void){
    bool sosuu[Max];
    for(int i=0;i<Max;i++)sosuu[i]=true;
    sosuu[0]=false;sosuu[1]=false;
    for(int i=2;i<Max;i++){
        if(sosuu[i]==true){
            for(int s=i+i;s<Max;s+=i){
                sosuu[s]=false;
            }
        }
    }//エラトスネス篩
    while(true){
        int syoki,plus,n;
        cin>>syoki>>plus>>n;
        if(syoki==0&&plus==0&&n==0)break;
        int cnt=0,s;
        for(s=syoki;cnt<n;s+=plus){
            if(sosuu[s]==true)cnt++;
            if(n==cnt)break;
        }
        cout<<s<<endl; 
    }
    return 0;
}