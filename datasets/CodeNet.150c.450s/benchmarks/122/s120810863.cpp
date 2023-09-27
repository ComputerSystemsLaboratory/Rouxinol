#include <stdio.h>
#include <queue>
using namespace std;
int main(){
int temp;
priority_queue<int> q;
char a[1000];
while(1){
scanf("%s",a);
if(a[2]=='d')return 0;
scanf("%d",&temp);
if(a[2]=='s'){
q.push(temp);
}
if(a[2]=='t'){
printf("%d\n",q.top());
q.pop();
}
}
}