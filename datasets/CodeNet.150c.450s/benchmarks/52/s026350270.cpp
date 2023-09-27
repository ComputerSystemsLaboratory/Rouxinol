#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int n;
    list<int> lst;
    lst.push_back(555);
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            auto itr=lst.begin();
            printf("%d\n",*itr);
            lst.pop_front();
        }else{
            lst.push_front(n);
        }
    }
    return 0;
}