#include<cstdio>
using ll = long long;
using ull = unsigned long long;
const static int MAX_D = 365;
int c[26], s[MAX_D][26], S, last[26];

int main(){
    int D;
    scanf("%d", &D);
    for (int i = 0; i < 26; i++){
        scanf("%d", c + i);
    }
    for (int i = 0; i < D; i++){
        for (int j = 0; j < 26; j++){
            scanf("%d", &s[i][j]);
        }
    }
    for (int i = 1; i <= D; i++){
        int t;
        scanf("%d", &t);
        t--;
        last[t] = i;
        S += s[i-1][t];
        for (int j = 0; j < 26; j++){
            S -= c[j]*(i - last[j]);
        }
        printf("%d\n", S);
    }
	return 0;
}