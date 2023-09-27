#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int h=0,m=0;
    string s,p;
    while(1){
        cin >> s >> m;
        if(s == "-")break;
        
        for(int i=0;i<m;i++){
            cin >> h;
            p = s.substr(0,h);
            s = s.erase(0,h);
            s += p;
        }
        cout << s << endl;
    }
}
