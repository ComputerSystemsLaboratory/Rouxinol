#include <stdio.h>
#include <stack>
using namespace std;
struct hollow{
    int n;
    int l;
};
int main(){
    int now=0,ans=0,t=0,c[20001];
    stack<int> d;
    stack<hollow>b;
    hollow temp;
    char a[20001];
    for(int i=0;i<20001;i++)a[i]='\0';
    scanf("%s",a);
    while(a[now]!='\0'){
        if(a[now]=='\\')d.push(now);
        if(a[now]=='/'&&!d.empty()){
            temp.n=now-d.top();
            temp.l=d.top();
            d.pop();
            while(!b.empty()&&b.top().l>temp.l){
                temp.n+=b.top().n;
                b.pop();
            }
            b.push(temp);
        }
        now++;
    }
    while(!b.empty()){
        c[t]=b.top().n;
        ans+=c[t];
        t++;
        b.pop();
        
    }
    printf("%d\n%d",ans,t);
    for(int i=t-1;i>=0;i--)printf(" %d",c[i]);
    printf("\n");
}