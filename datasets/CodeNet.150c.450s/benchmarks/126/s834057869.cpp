#include <iostream>
#include <stack>
#include <algorithm>
#include<string.h>
using namespace std;
typedef pair<int,int>pa;
int ma[42][42];
int main(){
    while(true){
        int a,b,x,y;
        int n;
        cin>>a>>b;
        if(a==0)break;
        cin>>n;
        memset(ma,0,sizeof(ma));
        while(n--){
            cin>>x>>y;x--;
            ma[b-y][x]=-1;
        }
        ma[b-1][0]=1;
        stack<pa>stk;
        stk.push(pa(0, b-1));
        while(stk.size()){
            pa p=stk.top();
            stk.pop();
            x=p.first,y=p.second;
            if(x+1<a&&ma[y][x+1]!=-1){
                ma[y][x+1]+=1;
                stk.push(pa(x+1,y));
            }
            if(y-1>-1&&ma[y-1][x]!=-1){
                ma[y-1][x]+=1;
                stk.push(pa(x,y-1));
            }
            
        }
        
        cout<<ma[0][a-1]<<endl;
    }
    return 0;
}