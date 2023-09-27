#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int w, n;
    int d[31];
    char s[30];
    while(~scanf("%d %d", &w, &n)){
        for(int i=1;i<=w;i++) d[i] = i;
        for(int i=0;i<n;i++){
            scanf("%s", s);
            int a, b;
            sscanf(s, "%d,%d", &a, &b);
            swap(d[a], d[b]);
        }
        for(int i=1;i<=w;i++) cout << d[i] << endl;
    }
}