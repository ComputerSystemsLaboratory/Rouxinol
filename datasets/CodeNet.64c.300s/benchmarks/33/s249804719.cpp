#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char o[1];
    for (;;) {
        scanf("%d %c %d",&a,o,&b);
        if (o[0]=='?') break;
        if (o[0]=='+') printf("%d\n",a+b);
        else if (o[0]=='-') printf("%d\n",a-b);
        else if (o[0]=='*') printf("%d\n",a*b);
        else if (o[0]=='/') printf("%d\n",a/b);
    }
    return 0;
}

