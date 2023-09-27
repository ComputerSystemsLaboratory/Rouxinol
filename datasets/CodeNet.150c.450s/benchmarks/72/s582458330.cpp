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
    char w;
    for(;;){
        scanf("%c",&w);
        if(w=='\n'){
            break;
        }else if(isupper(w)){
            w=tolower(w);
            printf("%c",w);
        }else if(islower(w)){
            w=toupper(w);
            printf("%c",w);
        }else{
            printf("%c",w);
        }
    }
    printf("\n");
    return 0;
}