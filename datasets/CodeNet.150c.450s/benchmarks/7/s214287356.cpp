#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    vector<int> s(10);
    for(auto&e:s){
        scanf("%d",&e);
    }
    sort(s.begin(),s.end(),greater<int>());
    for(int i=0;i<3;i++){
        printf("%d\n",s[i]);
    }
    return 0;
}