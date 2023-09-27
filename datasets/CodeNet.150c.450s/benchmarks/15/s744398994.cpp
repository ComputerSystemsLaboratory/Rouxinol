#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int n,q,ans=0,chk=0;
    scanf("%d",&n);
    vector<int> s(n);
    for(auto&e:s){
        scanf("%d",&e);
    }
    sort(s.begin(),s.end());

    scanf("%d",&q);
    vector<int> t(q);
    for(auto&e:t){
        scanf("%d",&e);
    }
    sort(t.begin(),t.end());

    for(int i=0;i<q;i++){
        for(int j=chk;j<n;j++){
            if(t[i]==s[j]){
                ans++;
                break;
            }else if(t[i]<s[j]){
                break;
            }
            chk=j;
        }
    }
    printf("%d\n",ans);
    return 0;
}