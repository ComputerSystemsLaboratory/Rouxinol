#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int n;
    scanf("%d",&n);
    list<int> lst;
    for(int i=0;i<n;i++){
        char s[11];
        int p;
        scanf("%s",&s);
        //string s=c;
        //if(s=="deleteFirst"){
        if(s[6]=='F'){
            lst.pop_front();
        }else if(s[6]=='L'){
            lst.pop_back();
        }else if(s[0]=='i'){
            scanf("%d",&p);
            lst.push_front(p);
        }else{
            scanf("%d",&p);
            for(auto itr=lst.begin(); itr!=lst.end();itr++){
                if(*itr==p){
                    lst.erase(itr);
                    break;
                }
            }
        }
    }
    int l=lst.size();
    for(int i=0;i<l-1;i++){
        printf("%d ",*lst.begin());
        lst.pop_front();
    }
    printf("%d\n",*lst.begin());
    return 0;
}