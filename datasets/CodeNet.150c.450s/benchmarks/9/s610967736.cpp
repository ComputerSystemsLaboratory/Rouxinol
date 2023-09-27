#include<cstdio>
#include<cctype>
#include<string>
#include<iostream>
using namespace std;


int sum = 0;
string s, t;
int a,b;

int main(void){
    while(1){
        cin >> s;
        if (s == "-") break;
        scanf("%d", &a);
        for (int i = 0; i < a; i++){
            scanf("%d", &b);
            t = s.substr(0, b);
            s.erase(0, b);
            s = s + t;
        }
        cout << s << endl;
    }
    return 0;
}