#include <iostream>
#include <cstring>

using ll = long long;
using namespace std;
char H[1046527][14];

int getChar(char ch){
    if (ch =='A') return 1;
    if (ch =='C') return 2;
    if (ch =='G') return 3;
    if (ch =='T') return 4;
}

ll getkey(char str[]){
    ll sum = 0, p = 1, i;
    for ( i = 0; i <  strlen(str); ++i){
        sum += p*getChar(str[i]);
        p *= 5;
    }
    return sum;
}

ll h1(ll key){return key % 1046527;}
ll h2(ll key){return 1 + (key % 1046526); }

int find(char str[]) {
    ll key, i, h;
    key = getkey(str);
    for (i = 0;; i++){
        h = (h1(key) + i*h2(key)) % 1046527;
        if (strcmp(H[h], str) == 0) return 1;
        else if (strlen(H[h]) == 0) return 0;
    }
}

int insert(char str[]) {
    ll key, i, h;
    key = getkey(str);
    for (i = 0;; i++){
        h = (h1(key) + i*h2(key)) % 1046527;
        if (strcmp(H[h], str) == 0) return 1;
        else if (strlen(H[h]) == 0){
            strcpy(H[h], str); return 0;
        }
    }
}

int main() {
    int i, n, h;
    char str[14], com[9];
    for (auto &j : H) {
        j[0] = '\0';
    }
    cin >> n;
    for (int k = 0; k < n; ++k) {
        scanf("%s %s", com, str);
        if (com[0] == 'i') {
            insert(str);
        } else {
            if (find (str)) {
                cout << "yes\n";
            } else {
                cout << "no\n";
            }
        }
    }
    return 0;
}
