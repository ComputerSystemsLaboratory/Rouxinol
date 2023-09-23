#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int n,debt=100000;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        debt=static_cast<int>(debt*1.05);
        if(debt%1000!=0){
            debt=(debt/1000)*1000;
            debt+=1000;
        }
    }
    printf("%d\n",debt);
    return 0;
}