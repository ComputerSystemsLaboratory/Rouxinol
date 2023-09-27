#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<stdio.h>
#include<stack>
#include<queue>
#include<stdlib.h>
#define LEN 100005

using namespace std;
typedef pair<int,string> P;
int main(){
    
    queue<pair<int,string> > q;
    int n,p;
    cin>>n>>p;
    int elaps=0;
    for(int i=0;i<n;i++){
        string name;
        int x;
        cin>>name>>x;
        q.push(make_pair(x,name));
    }
    while(!q.empty()){
        
        P u=q.front();
        q.pop();
        int c=min(u.first,p);
        u.first-=c;
        elaps+=c;
        if(u.first>0){
            q.push(u);
        }else{
            cout<<u.second<<" "<<elaps<<endl;
        }
        
        
        
    }
    return 0;
}

