#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    char number[1001];
    int sum;
    while (1) {
        int i = 0;
        sum = 0;
        scanf("%s", number);
        while (number[i] != '\0') {
            sum += number[i] - '0';
            i++;
        }
        if (sum == 0) break;
        cout << sum << endl;
    }
}