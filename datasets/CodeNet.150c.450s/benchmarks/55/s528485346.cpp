#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char num[1001];
    while(1){
        scanf("%s", num);
        if(num[0] == '0') break;
        int sum = 0;
        for (int i = 0; strlen(num) > i; i++){
            sum += num[i] - '0';
        }
        printf("%d\n",sum);
    }
    return 0;
}
