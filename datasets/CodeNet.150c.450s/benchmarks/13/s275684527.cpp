#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s[201];
    char t[101];
    char p[101];
    scanf("%s", s);
    scanf("%s", p);

    strcpy(t, s);
    strcat(s, t);

    if (strstr(s, p) == NULL) cout << "No";
    else cout << "Yes";
    cout << endl;
}