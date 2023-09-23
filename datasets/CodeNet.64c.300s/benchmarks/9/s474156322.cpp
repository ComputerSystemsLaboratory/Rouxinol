#include<cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int val=100000;
    while(n--){
        val=val/100*105;
        if(val%1000){
            val=val/1000*1000;
            val+=1000;
        }
    }
    printf("%d\n",val);

    return 0;
}