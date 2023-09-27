#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
 
char c[4] = {'i', 'x', 'c', 'm'};
int Calc(string s);
void Convert(int num);
 
int main(void){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s1, s2;
        cin >> s1 >> s2;
 
        int num1 = Calc(s1);
        int num2 = Calc(s2);
 
        Convert(num1 + num2);
    }
 
 
    return 0;
}
 
int Calc(string s){
    int num = 0;
    int set = 1;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '2' && s[i] <= '9'){
            set = s[i] - '0';
        }else{
            if(s[i] == 'm'){
                num += 1000*set;
            }else if(s[i] == 'c'){
                num += 100*set;
            }else if(s[i] == 'x'){
                num += 10*set;
            }else if(s[i] == 'i'){
                num += set;
            }
            set = 1;
        }
    }
    return num;
}
 
void Convert(int num){
    int out[4];
    for(int i=0; i<4; i++){
        out[i] = 0;
    }
    for(int i=0; i<4; i++){
        int t = num % 10;
        if(t != 0){
            out[i] = t;
        }
        num/=10;
    }
 
    for(int i=3; i>=0; i--){
        if(out[i] != 0){
            if(out[i] > 1)cout << out[i];
            cout << c[i];
        }
    }
    cout << endl;
}