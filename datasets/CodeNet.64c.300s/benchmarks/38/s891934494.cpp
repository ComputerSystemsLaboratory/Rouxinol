#include"iostream"
#include"stdio.h"
using namespace std;
int ball[11];
bool flag;
 
void Dfs(int i,int left,int right)
{
    if(flag) return;
    if(i==10) {flag=true;return;}
 
    if(ball[i]>left)
        Dfs(i+1,ball[i],right);
    if(ball[i]>right)
        Dfs(i+1,left,ball[i]);
}
 
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        while(t--){
            flag=false;
            for(int i=0;i<10;i++)
                cin>>ball[i];
            Dfs(0,0,0);
            if(flag)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
