#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std;
int main(void){
    int n;
    string in;
    while(1){
        cin>>n;
        if(n==0)break;
        char data[n];
        char into[n];
        for(int i=0;i<n;i++){
            cin>>in;
            data[i]=in[0];
            cin>>in;
            into[i]=in[0];
        }
        int last;
        cin >> last;
        for(int t=0;t<last;t++){
            cin >> in;
            bool f=false;
            for(int i=0;i<n;i++){
                if(data[i]==in[0]){
                    f=true;
                    cout<<into[i];
                }
            }
            if(!f)cout<<in[0];
        }
        cout<<"\n";
    }
    return 0;
}