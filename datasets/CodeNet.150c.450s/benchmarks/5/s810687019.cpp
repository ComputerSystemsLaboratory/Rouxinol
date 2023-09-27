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
        for(int i=n-1;i>-1;i--){
                if(i>0){
                        printf("%d ",ar[i]);
                }else{
                        printf("%d\n",ar[i]);
                }
        }
        return 0;
}