#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    char S[20000];
    stack<int> A;
    stack<pair<int,int> > B;
    scanf("%s",S);
    int k;
    for(int i=0;i<strlen(S);i++){
        if(S[i]=='\\')A.push(i);
        else if(S[i]=='/'){
            if(!A.empty()){
                k=A.top();A.pop();
                sum+=i-k;
                pair<int,int> u;
                int sss=i-k;
                while(!B.empty()&&k<B.top().first){
                    u=B.top();B.pop();
                    sss+=u.second;
                }
                B.push(make_pair(k,sss));
            }
        }
    }
    cout<<sum<<endl;
    cout<<B.size();
    vector<int> ans;
    while(!B.empty()){ans.push_back(B.top().second);B.pop();}
    int nn=ans.size();
    for(int i=nn-1;i>=0;i--){
        printf(" %d",ans[i]);
    }
    printf("\n");

}
