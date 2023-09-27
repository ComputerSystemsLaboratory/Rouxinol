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
    int n;
    cin>>n;
    string out1=".,!? ";
    string out2="abc";
    string out3="def";
    string out4="ghi";
    string out5="jkl";
    string out6="mno";
    string out7="pqrs";
    string out8="tuv";
    string out9="wxyz";
    for(int s=0;s<n;s++){
        string in;
        cin>>in;
        int cnt=0;
        for(int i=0;i<in.length();i++){
            switch (in[i]-'0') {
                case 0:
                    switch (in[i-1]-'0') {
                        case 1:
                            cout<<out1[(cnt-1)%5];
                            break;
                        case 2:
                            cout<<out2[(cnt-1)%3];
                            break;
                        case 3:
                            cout<<out3[(cnt-1)%3];
                            break;
                        case 4:
                            cout<<out4[(cnt-1)%3];
                            break;
                        case 5:
                            cout<<out5[(cnt-1)%3];
                            break;
                        case 6:
                            cout<<out6[(cnt-1)%3];
                            break;
                        case 7:
                            cout<<out7[(cnt-1)%4];
                            break;
                        case 8:
                            cout<<out8[(cnt-1)%3];
                            break;
                        case 9:
                            cout<<out9[(cnt-1)%4];
                            break;
                        case 0:
                            break;
                    }
                    cnt=0;
                    break;
                default:
                    cnt++;
                    break;
            }
        }
        if(in=="0")cout<<"";
        else cout<<endl;
    }
    return 0;
}