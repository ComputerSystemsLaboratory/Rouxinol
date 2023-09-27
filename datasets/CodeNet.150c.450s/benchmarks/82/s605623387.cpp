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
    int dice[6],q;
    char c;
    for(int i=0;i<6;i++){
        scanf("%d",&dice[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if((x==dice[5] && y==dice[4])||(x==dice[4] && y==dice[0])||(x==dice[0] && y==dice[1])||(x==dice[1] && y==dice[5])){
            printf("%d\n",dice[2]);
        }else if((x==dice[0] && y==dice[2])||(x==dice[2] && y==dice[5])||(x==dice[5] && y==dice[3])||(x==dice[3] && y==dice[0])){
            printf("%d\n",dice[4]);
        }else if((x==dice[5] && y==dice[1])||(x==dice[1] && y==dice[0])||(x==dice[0] && y==dice[4])||(x==dice[4] && y==dice[5])){
            printf("%d\n",dice[3]);
        }else if((x==dice[0] && y==dice[3])||(x==dice[3] && y==dice[5])||(x==dice[5] && y==dice[2])||(x==dice[2] && y==dice[0])){
            printf("%d\n",dice[1]);
        }else if((x==dice[2] && y==dice[1])||(x==dice[1] && y==dice[3])||(x==dice[3] && y==dice[4])||(x==dice[4] && y==dice[2])){
            printf("%d\n",dice[5]);
        }else{
            printf("%d\n",dice[0]);
        }
    }
    return 0;
}