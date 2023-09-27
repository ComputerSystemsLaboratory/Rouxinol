#include<iostream>
using namespace std;
#include<stdio.h>

int main() {
        int r[1000], a, b, i, j;
        char ch;
        for(i = 0; i < 1000; i++) {
                r[i] = 0;
                while(1) {
                        scanf("%c", &ch);
                        if(ch == '\n') break;
                        a = ch - '0';
                        r[i] += a;
                }
                if(r[i] == 0) break;
        }
        for(j = 0; j < i; j++) {
                cout << r[j] << endl;
        }
        return 0;
}