#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
bool cmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0') {
        if (str2[i] == '\0') return false;
        if (isupper(str2[i])) str2[i] = tolower(str2[i]);
        if (str1[i] != str2[i]) return false;
        i++;
    }
    if (str2[i] == '\0') return true;
    else return false;
}
int main(void){
    int cnt = 0;
    char W[11] ;
    char T[1001];
    cin >> W;
    int i = 0;
    while (W[i] != '\0') {
        if (isupper(W[i])) W[i] = tolower(W[i]);
        i++;
    }
    while (1) {
        cin >> T;
        if (!strcmp(T, "END_OF_TEXT")) break;
        if (cmp(W, T)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}