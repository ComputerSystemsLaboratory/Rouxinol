#include <stdio.h>
#include <stack>
using namespace std;
int main(){
int temp;
stack<int> s;
while(scanf("%d",&temp)!=EOF){
if(temp==0){
printf("%d\n",s.top());
s.pop();
}
else s.push(temp);
}
}