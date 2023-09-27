#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<queue>
using namespace std;
int a,b,temp,n;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int flag=1;
        a=0,b=0;
        queue<int>que;
        while(que.size())que.pop();
        for(int i=0;i<10;i++){
            cin>>temp;
            que.push(temp);
        }
        while(que.size()){
            temp=que.front();
            que.pop();
            if(temp<=a&&temp<=b){
                cout<<"NO\n";
                flag=0;
                break;
            }
            else if(temp<=a&&temp>b)b=temp;
            else if(temp<=b&&temp>a)a=temp;
            else {
                if(a>=b)a=temp;
                else b=temp;
            }
        }
        if(flag)cout<<"YES\n";
    }

    return 0;
}