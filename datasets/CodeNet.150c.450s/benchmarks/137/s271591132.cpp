#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N;
    map<string, bool> T;
    cin >> N;
    for (int i = 0; i < N; i++) {
        char s[16],t[16];
        scanf("%s %s",s,t);
        if (s[0] == 'i') {
            T[t] = true;
        }else{
            if (T[t]) printf("yes\n");
            else printf("no\n");
        }
    }
    
    
    return 0;
}