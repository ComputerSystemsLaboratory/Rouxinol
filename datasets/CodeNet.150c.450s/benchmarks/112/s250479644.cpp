#include<bits/stdc++.h>
using namespace std;


int N;
void solve(){
    map<char,char>M;
    while(N--){
        char from,to;
        scanf(" %c %c",&from,&to);
        M[from]=to;
    }

    int K;
    scanf("%d",&K);
    while(K--){
        char c;
        scanf(" %c",&c);
        if(M.find(c)!=M.end())printf("%c",M[c]);
        else printf("%c",c);
    }
    puts("");
}

int main(){
    while(scanf("%d",&N),N)solve();
    return 0;
}