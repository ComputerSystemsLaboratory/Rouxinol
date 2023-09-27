#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a > b) swap(&a,&b);
        if(b > c) swap(&b,&c);
        if(a > b) swap(&a,&b);
        printf("%d %d %d\n", a, b, c);
    }
}