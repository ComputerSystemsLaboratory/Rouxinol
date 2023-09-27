

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
typedef long long ll;
int mod(ll a){
    int c=a%1000000007;
    if(c>=0)return c;
    else return c+1000000007;
}
typedef pair<int,int> i_i;


int main(){
    priority_queue<int> q;
    char s[10];
    int n;
    while(1){
        scanf("%s",s);
        if(s[0]=='i'){
            scanf("%d",&n);
            q.push(n);
        }else if(s[1]=='x'){
            cout<<q.top()<<endl;q.pop();
        }else{
            break;
        }
    }
    
    return 0;
}
