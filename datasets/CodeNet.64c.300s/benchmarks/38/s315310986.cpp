#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n,s;
    cin >> n;
    for (int i=0; i < n; i++){
        int a=0, b=0, flg=0;
        for (int j = 0; j < 10; j++){
            cin >> s;
            if (s > a) a=s;
            else if (s > b) b=s;
            else flg = 1;
        }
        printf("%s\n", flg==0? "YES": "NO");
    }
}