#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/

int main(){
    int mod=1000000007;
    vector<int> a(5);
    for(auto&e:a) {
        scanf("%d",&e);
    }
    sort(a.begin(),a.end());
    for(int i=4;i>0;i--) {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[0]);
    return 0;
}