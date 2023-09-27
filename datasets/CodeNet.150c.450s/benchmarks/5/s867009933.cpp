#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int n;
        scanf("%d",&n);
        vector<int>ar(n);
        for(auto&e:ar){
                scanf("%d",&e);
        }
        for(int i=n-1;i>0;i--){
                printf("%d ",ar[i]);
        }
        printf("%d\n",ar[0]);
        return 0;
}