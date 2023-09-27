#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std;
int main(void){
    int sum,a,b,c,d;
    cin>>a>>b>>c>>d;
    sum=a+b+c+d;
    cin>>a>>b>>c>>d;
    if(sum>a+b+c+d)cout<<sum;
    else cout<<a+b+c+d;
    puts("");
    return 0;
}