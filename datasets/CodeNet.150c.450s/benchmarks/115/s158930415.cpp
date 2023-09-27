#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int LCS(string a, string b)
{
    int ret;
    int i, j;
    int len1, len2;
    int result[1001][1001] = {0};

    len1 = a.length();
    len2 = b.length();

    a = ' ' + a;
    b = ' ' + b;

    for (i = 1; i <= len1; i++) {
        for (j = 1; j <= len2; j++) {
            if (a[i] == b[j]) {
                result[i][j] = result[i - 1][j - 1] + 1;
            }
            else {
                result[i][j] = max(result[i][j - 1], result[i - 1][j]);
            }
        }
    }

    return result[len1][len2];
}

int main(void)
{
    int i;
    int num;
    int ret;
    string a, b;

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        cin >> a;
        cin >> b;
        ret = LCS(a, b);
        printf("%d\n", ret);
    }

    return 0;
}