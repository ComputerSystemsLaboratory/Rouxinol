#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    int cases;
    scanf("%d",&cases);
    for(int i=0;i<cases;i++){
        int times;
        scanf("%*d%d",&times);
        vector<int>table;
        for(int k=0;k<times;k++){
            int num;
            scanf("%d",&num);
            table.push_back(num);
        }
        int tmp=0;
        for(int k=0;k<cases;k++){
            if(k!=0){
                printf(" ");
            }
            if(tmp<table.size() && table[tmp]==k+1){
                printf("1");
                tmp++;
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
}

