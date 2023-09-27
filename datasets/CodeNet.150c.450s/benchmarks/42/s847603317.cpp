#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<queue>
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
    int n,q,ans=0;
    scanf("%d %d",&n,&q);
    queue<string> name;
    queue<int> time;
    for(int i=0;i<n;i++){
        char c[10];
        int j;
        scanf("%s %d",&c,&j);
        string s=c;
        name.push(s);
        time.push(j);
    }
    for(;;){
        if(name.empty()) break;
        int chk=time.front();
        string tmp=name.front();
        name.pop();
        time.pop();
        if(chk<=q){
            printf("%s %d\n",tmp.c_str(), ans+chk);
            ans+=chk;
        }else{
            ans+=q;
            chk-=q;
            name.push(tmp);
            time.push(chk);
        }
    }
    return 0;
}