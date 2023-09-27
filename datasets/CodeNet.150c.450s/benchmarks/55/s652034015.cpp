#include<cstdio>
#include<cctype>
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;

    
    while(1) {
        int sum = 0;
        cin >> str;
        if (str == "0") break;
        
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') sum += 1;
            if (str[i] == '2') sum += 2;
            if (str[i] == '3') sum += 3;
            if (str[i] == '4') sum += 4;
            if (str[i] == '5') sum += 5;
            if (str[i] == '6') sum += 6;
            if (str[i] == '7') sum += 7;
            if (str[i] == '8') sum += 8;
            if (str[i] == '9') sum += 9;
            if (str[i] == '0') sum += 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}
