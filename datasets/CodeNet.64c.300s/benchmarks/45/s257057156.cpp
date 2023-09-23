#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std;
int main(void){
    while(1){
        int nin,yu,pars;
        cin>>nin>>yu>>pars;
        if(nin==0&&yu==0&&pars==0)break;
        int data[nin],cnt=0,kin=0;
        for(int i=1;i<=nin;i++){
            cin>>data[i];
            if(i==yu)cnt++;
            kin+=data[i]*100;
        }
        int bun=kin*(100-pars)/100;
        if(data[yu]==0)cout<<"0\n";
        else cout<<bun/data[yu]<<endl;
    }
    return 0;
}