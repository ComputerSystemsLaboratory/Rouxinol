#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int n,s;

int solve(int now,int last,int count){
    if(count==n&&now==s){
        return 1;
    }
    if(count==n||now>s){
        return 0;
    }
    int co=0;
    for(int i=last+1;i<10;i++){
        co+=solve(now+i,i,count+1);
    }
    return co;
}
int main()
{
    
    while(cin>>n>>s){
        if(n==0&&s==0)break;
        int count=0;
        for(int i=0;i<10;i++){
            count+=solve(i,i,1);
        }
        cout<<count<<endl;
    }
    return 0;
}