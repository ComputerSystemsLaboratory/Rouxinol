#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(void){
    string str1,str2,ans;
    ans = "";
    cin >> str1 >> str2;
    str1 = str1 + str1;
    for (int i = 0; i < str1.size(); i++){
        if (str1[i] == str2[0]){
            for(int k = i; k < str2.size() + i; k++){
                ans += str1[k];
            }
            if (ans == str2){
                cout << "Yes" << endl;
                return 0;
            }
            ans = "";
        }
    }
    cout << "No" << endl;
    return 0;
}


