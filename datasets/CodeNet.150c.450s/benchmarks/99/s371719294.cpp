#include<iostream>
#include<list>
#include<cstring>
#include<algorithm>
#include <utility>
#include<stdio.h>
#include<climits>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int main(){
    int n,x,y;
    int i,j,k,l;
    string str;
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> str;
        x = 0;
        l = 1;
        for(k = 0;k < str.length();k++){
            switch(str[k]){
                case 'm':
                    x += l*1000;
                    l = 1;
                    break;
                case 'c':
                    x += l*100;
                    l = 1;
                    break;
                case 'x':
                    x += l*10;
                    l = 1;
                    break;
                case 'i':
                    x += l;
                    l = 1;
                    break;
                default:
                    l = str[k]-'0';
                    break;
            }
        }
        cin >> str;
        y = 0;
        l = 1;
        for(k = 0;k < str.length();k++){
            switch(str[k]){
                case 'm':
                    y += l*1000;
                    l = 1;
                    break;
                case 'c':
                    y += l*100;
                    l = 1;
                    break;
                case 'x':
                    y += l*10;
                    l = 1;
                    break;
                case 'i':
                    y += l;
                    l = 1;
                    break;
                default:
                    l = str[k]-'0';
                    break;
            }
        }
        x += y;
        if(x/1000){
            if(x/1000>1) cout << x/1000;
            cout << 'm';
            x %= 1000;
        }
        if(x/100){
            if(x/100>1) cout << x/100;
            cout << 'c';
            x %= 100;
        }
        if(x/10){
            if(x/10>1) cout << x/10;
            cout << 'x';
            x %= 10;
        }
        if(x){
            if(x>1) cout << x;
            cout << 'i';
        }
        cout << endl;
    }
}