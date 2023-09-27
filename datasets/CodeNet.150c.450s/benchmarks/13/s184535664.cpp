#include <iostream>
using namespace std;
int main(void){
    char s[101];
    char p[101];
    cin >> s >> p;
    bool flg = false;
    int i = 0;
    while (s[i] != '\0') {
        int j = i;
        int k = 0;
        while (1) {
            if (p[k] == '\0') {
                flg = true;
                break;
            }
            if (s[j] != p[k]) break;
            j++;
            k++;
            if (s[j] == '\0') j = 0;
        }
        if (flg) break;
        i++;
    }
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}