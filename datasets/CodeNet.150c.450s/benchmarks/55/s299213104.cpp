#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    char ch[1000];

    while(1){
        scanf("%s", ch);
        if (strcmp(ch, "0") == 0) break;

        int sum = 0;
        for (int i = 0; i < 1000; i++) {
            if (ch[i] == '\0') break;
            sum += ch[i] - '0';
        }
        cout << sum << endl;
    }
}