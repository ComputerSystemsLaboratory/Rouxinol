#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        vector<int> t(3);
        for(auto&e:t){
            scanf("%d",&e);
        }
        sort(t.begin(),t.end());
        if(t[0]*t[0]+t[1]*t[1]==t[2]*t[2]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}