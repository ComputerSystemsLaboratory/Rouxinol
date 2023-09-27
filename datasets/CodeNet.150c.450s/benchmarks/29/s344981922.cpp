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
        char c[11];
        int p;
        scanf("%s",&c);
        string s=c;
        if(s=="deleteFirst"){
            lst.pop_front();
        }else if(s=="deleteLast"){
            lst.pop_back();
        }else if(s=="insert"){
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