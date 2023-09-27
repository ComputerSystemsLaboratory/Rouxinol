#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string W,T;
    int c=0;
    cin >> W;
    while(1){
        cin >> T;
        if(T == "END_OF_TEXT")break;
        transform(T.begin(),T.end(),T.begin(),::tolower);
        if(T == W){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
