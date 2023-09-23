#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int a,b,c;
    for(;;){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c==-3){
            break;
        }else if(a+b>=80){
            printf("A\n");
        }else if(a+b>=65){
            printf("B\n");
        }else if(a+b>=50 || (a+b>=30 && c>=50)){
            printf("C\n");
        }else if(a+b>=30 && a!=-1 && b!=-1){
            printf("D\n");
        }else{
            printf("F\n");
        } 
            
    }
    return 0;
}