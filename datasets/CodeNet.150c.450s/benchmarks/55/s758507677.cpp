#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    char x[1001];
    int i, sum=0;
    while(scanf("%s\n", x)) {
        sum = 0;
        if (x[0] == '0') break;
        for(i=0; x[i] != 0; i++)
            sum += x[i] - '0';
        cout << sum << endl;
    }
}