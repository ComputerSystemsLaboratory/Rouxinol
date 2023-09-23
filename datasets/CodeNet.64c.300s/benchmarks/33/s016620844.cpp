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
    int a,b;
    char op;
    for(;;){
        scanf("%d %s %d",&a,&op,&b);
        if(op=='?'){
            break;
        }else if(op=='+'){
            printf("%d\n",a+b);
        }else if(op=='-'){
            printf("%d\n",a-b);
        }else if(op=='*'){
            printf("%d\n",a*b);
        }else if(op=='/'){
            printf("%d\n",a/b);
        }
    }
    return 0;
}