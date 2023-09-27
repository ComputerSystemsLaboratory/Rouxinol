#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;
int main(){
    string t,w;
    int c = 0,i;
    size_t pos;
    cin >> w;
    while((cin >> t) && (t != "END_OF_TEXT")){
        for(int i = 0;i < t.length();i++){
            if(t[i] >= 'A' && t[i] <= 'Z') t[i] += 'a' - 'A';
        }
        pos = 0;
        if(t == w) c++;
    }
    printf("%d\n",c);
    return 0;
}

