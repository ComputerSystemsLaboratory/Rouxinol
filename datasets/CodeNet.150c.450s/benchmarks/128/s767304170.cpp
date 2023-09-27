#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define N 20
using namespace std;

int main() {
    char str[N];
    cin >> str;
    reverse(str,str+strlen(str));
    printf("%s\n",str);
    return 0;
}