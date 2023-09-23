#include<cstdio>
using namespace std;
int main(void){
    int flag[31] = {1};
    for(int i = 0;i < 28;i++){
        int a; scanf("%d",&a);
        flag[a] = 1;
    }
    for(int i = 0; i <= 30;i++){
        if(flag[i] == 0) printf("%d\n",i);
    }
    return 0;
}