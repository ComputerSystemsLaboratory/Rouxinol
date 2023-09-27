#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdlib>
#include <cmath>
#include<stdio.h>
#include<queue>
#define MAX 1000000000000000000LL
long long inf=1000000007;
using namespace std;
    int H,A[2000001];

       
int main(){
    string str;
    priority_queue<int>PQ;
    
    while(1){
        cin>>str;
        if(str[0]=='i'){
            int key; cin>>key;
            PQ.push(key);
        }else if(str[1]=='x'){
            cout<<PQ.top()<<endl;
            PQ.pop();
        }else break;
  
    }
    return 0;
    
 
}