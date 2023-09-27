#include<iostream>
#include<cctype>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
#include<cmath>
using namespace std;

int main() {
    int pos1[7] = { 0 }, pos2[7] = { 0 }, num[6], i;
    char command[101];

    for (i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
        pos1[i + 1] = i + 1;
        pos2[i + 1] = i + 1;
    }
    scanf("%s", command);

    for (i = 0; i < strlen(command); i++) {
        if (command[i] == 'N') {
            pos1[1] = pos2[2];
            pos1[2] = pos2[6];
            pos1[6] = pos2[5];
            pos1[5] = pos2[1];
        }
        else if (command[i] == 'S') {
            pos1[1] = pos2[5];
            pos1[2] = pos2[1];
            pos1[6] = pos2[2];
            pos1[5] = pos2[6];
        }
        else if (command[i] == 'E') {
            pos1[1] = pos2[4];
            pos1[3] = pos2[1];
            pos1[6] = pos2[3];
            pos1[4] = pos2[6];
        }
        else if (command[i] == 'W') {
            pos1[1] = pos2[3];
            pos1[3] = pos2[6];
            pos1[6] = pos2[4];
            pos1[4] = pos2[1];
        }
        
        for (int j = 1; j < 7; j++) {
            pos2[j] = pos1[j];
        }
    }

    printf("%d\n", num[pos1[1]-1]);

    return 0;
}