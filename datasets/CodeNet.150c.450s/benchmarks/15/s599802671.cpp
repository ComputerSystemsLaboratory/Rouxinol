#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

using namespace std;

int ar_s[10000];
bool linear_search(int t, int n){
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (ar_s[i] == t) return true;
    }
    return false;
}

int main(int argc, char const* argv[])
{
    int n,q,  c = 0;

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &ar_s[i]);
    }

    scanf("%d ", &q);
    for (int i = 0; i < q; i++) {
        int t;
        scanf("%d ", &t);
        linear_search(t, n) ? ++c : 0;
    }
    
    printf("%d\n", c);
    
    return 0;
}