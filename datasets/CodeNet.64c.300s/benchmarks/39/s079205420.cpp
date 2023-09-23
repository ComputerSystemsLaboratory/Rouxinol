#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int cnt;
    int num;
    while (cin >> num) {
        cnt=0;
        for (int a=0; a<10; a++) {
            for (int b=0; b<10; b++) {
                for (int c=0; c<10; c++) {
                    for (int d=0; d<10; d++) {
                        if (a+b+c+d==num) {
                            cnt++;
                        }
                    }
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}