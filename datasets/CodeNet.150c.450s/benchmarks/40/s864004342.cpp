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
void solve(){
}
int main(){
    double pai=3.141592653589;
    int dice[6],tmp;
    char c[100];
    for(int i=0;i<6;i++){
        scanf("%d",&dice[i]);
    }
    scanf("%s",&c);
    for(int i=0;c[i];i++){
        if(c[i]=='S'){
            tmp=dice[4];
            dice[4]=dice[5];
            dice[5]=dice[1];
            dice[1]=dice[0];
            dice[0]=tmp;
        }else if(c[i]=='N'){
            tmp=dice[1];
            dice[1]=dice[5];
            dice[5]=dice[4];
            dice[4]=dice[0];
            dice[0]=tmp;
        }else if(c[i]=='W'){
            tmp=dice[2];
            dice[2]=dice[5];
            dice[5]=dice[3];
            dice[3]=dice[0];
            dice[0]=tmp;
        }else if(c[i]=='E'){
            tmp=dice[3];
            dice[3]=dice[5];
            dice[5]=dice[2];
            dice[2]=dice[0];
            dice[0]=tmp;
        }
    }
    printf("%d\n",dice[0]);
    return 0;
}