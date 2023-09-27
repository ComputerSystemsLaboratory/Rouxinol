#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
    string str,buf;
    int m,h;
    while(cin >> str && (str != "-")){
        scanf("%d",&m);
        for(int i = 1;i <= m;i++){
            scanf("%d",&h);
            buf = str.substr(0,h);
            str.erase(0,h);
            str += buf;
        }
        cout << str << endl;
    }
    return 0;
}
