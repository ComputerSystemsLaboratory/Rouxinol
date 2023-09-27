#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int C[10001] = {0};

int main(){
    int n;
    short num;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        scanf("%hd",&num);
        C[num]++;
    }
    
    short count = 0;
    int s = 1;
    
    while (s <= n-1) {
        if (C[count]) {
            printf("%d ",count);
            s++;
            C[count]--;
        }else{
            count++;
        }
    }
    while (C[count]==0) {
        count++;
    }
    printf("%d\n",count);
    
    return 0;
}