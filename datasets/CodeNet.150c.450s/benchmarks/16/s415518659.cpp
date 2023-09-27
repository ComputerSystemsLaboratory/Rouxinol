#include<stdio.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    stack<int>s1;
    stack<pair<int,int> >s2;
    char a;
    int sum=0,su,j;
    for(int i=1;cin>>a;i++){
        if(a=='\\'){
            s1.push(i);
        }else
        if(a=='/'&&s1.size()>0){
            j=s1.top();s1.pop();
            su=i-j;
            sum+=su;
            while(s2.size()>0&&s2.top().first>j){
                    su+=s2.top().second;s2.pop();
            }
            s2.push(make_pair(j,su));
        }
    }
    vector<int>ans;
    while(s2.size()>0){
        ans.push_back(s2.top().second);s2.pop();
    }
    reverse(ans.begin(),ans.end());
    printf("%d\n%d",sum,ans.size());
    for(int i=0;i<ans.size();i++){
        printf(" %d",ans[i]);
    }
    printf("\n");
    return 0;
}