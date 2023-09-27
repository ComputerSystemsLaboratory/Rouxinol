#include<bits/stdc++.h>
using namespace std;

int a,b;

int main(){
    while(scanf("%d%d",&a,&b)!=EOF){
        a+=b;
        printf("%d\n",(int)log10(a)+1);
    }
    return  0;
}