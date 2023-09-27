#include<iostream>
#include<cstdio>
#include<queue>
#include<string>

using namespace std;

priority_queue<int>q;

int main()
{
    int k;
    string com;
    while(cin>>com){
        if(com=="end"){
            break;
        }else if(com=="extract"){
            printf("%d\n",q.top());
            q.pop();
        }else{
            scanf("%d",&k);
            q.push(k);
        }
    }
    return 0;
}
