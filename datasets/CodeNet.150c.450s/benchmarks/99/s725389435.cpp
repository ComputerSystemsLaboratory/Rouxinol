#include <iostream>
#include <vector> 
#include <cmath>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <cerrno>
#include <stdio.h>
#include <stdlib.h>
#include <cfenv>
#include <stack>
#include <math.h>
#include <iomanip>
#include <limits>
#include <queue>
#define ll long long int
#define pb push_back
#define mp make_pair

using namespace std;

int suti(string s){
    int a = 0;
    int b;
    char c;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'm'&&i == 0){
            a += 1000;
        }
        else if(s[i] == 'c'&&i==0){
            a += 100;
        }
        else if(s[i] == 'x' && i == 0){
            a += 10;
        }
        else if(s[i] == 'i' && i==0){
            a += 1;
        }
        else if(s[i]=='m'){
            if('2'<=s[i-1]&&s[i-1]<='9'){
                c = s[i-1];
                b = c - '0';
                a += b*1000;
            }
            else{
                a += 1000;
            }
        }
        else if(s[i] == 'c'){
            if('2'<=s[i-1]&&s[i-1]<='9'){
                c = s[i-1];
                b = c - '0';
                a += b*100;
            }
            else{
                a += 100;
            }
        }
        else if(s[i] == 'x'){
            if('2'<=s[i-1]&&s[i-1]<='9'){
                c = s[i-1];
                b = c - '0';
                a += b*10;
            }
            else{
                a += 10;
            }
        }
        else if(s[i] == 'i'){
            if('2'<=s[i-1]&&s[i-1]<='9'){
                c = s[i-1];
                b = c - '0';
                a += b;
            }
            else {
                a += 1;
            }
        }
    }
    return a;
}

int main(){

    int n;
    cin >> n;
    int k;

    for(int i=0;i<n;i++){
        string s1,s2;
        cin >> s1 >> s2;
        //cout << s1 << " " << s2 << endl;
        int num1,num2;
        num1 = suti(s1);
        num2 = suti(s2);
        k = num1 + num2;
        if(k>=1000){
            if(k/1000==1){
                cout << "m";
            }
            else{
                cout << k/1000 << "m";
            }
        }
        k%=1000;
        if(k>=100){
            if(k/100==1){
                cout << "c";
            }
            else{
                cout << k/100 << "c";
            }
        }
        k%=100;
        if(k>=10){
            if(k/10==1){
                cout << "x";
            }
            else{
                cout << k/10 << "x";
            }
        }
        k%=10;
        if(k>=1){
            if(k==1){
                cout << "i" << endl;
            }
            else{
                cout << k << "i" << endl;
            }
        }
        else{
            cout << endl;
        }
    }
    return 0;
}
