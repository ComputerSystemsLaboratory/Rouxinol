#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

static const int MAX_LENGTH = 1000;

int main(void) {
    int tmpSum;
    char *inputList = new char[MAX_LENGTH];

    while(true) {
        scanf("%s", inputList);
        if(*inputList == '0') break;

        tmpSum = 0;
        for(int i=0; i < strlen(inputList); i++) {
            tmpSum += inputList[i] - '0';
        }

        cout << tmpSum << endl;
    }

    return 0;
}