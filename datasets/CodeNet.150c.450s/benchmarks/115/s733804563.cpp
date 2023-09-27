//
// Created by 李青坪 on 2018/10/29.
//

#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>

#define MAXN 150
#define MAXLEN 1000
using namespace std;

int c[MAXLEN+1][MAXLEN+1];

int getSubsequence(string x, string y){
    int i = 0, j = 0;
    while (i <= x.length()){
        while (j <= y.length()){
            if (i == 0 || j ==0){
                c[i][j] = 0;
            } else if (x[i-1] == y[j-1]){
                c[i][j] = c[i-1][j-1] + 1;
            } else if (x[i-1] != y[j-1]){
                c[i][j] = max(c[i-1][j], c[i][j-1]);
            }
            ++j;
        }
        ++i;
        j = 0;
    }
    return c[x.length()][y.length()];
}

int main(){
    int n;
    scanf("%d", &n);
    string x, y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        printf("%d\n", getSubsequence(x, y));
    }

}
/*
3
abcbdab
bdcaba
abc
abc
abc
bc
 */
