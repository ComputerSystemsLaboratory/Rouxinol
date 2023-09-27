#include <stdio.h>
#include <stack>
#include <iostream>
using namespace std;

int main (){

while (1){

int a,b,s,k,s2,i[18][18]={0},count=0;

stack <pair<int,int> > que;

pair <int,int> p,g;

p.first=1;
p.second=1;

que.push(p);

scanf ("%d %d",&a,&b);

if (a==0&&b==0) break;

for (s=0;s<=a+1;s++){
     for (s2=0;s2<=b+1;s2++){
	  if (s==a+1||s==0){
		i[s][s2]=1;
		}
	  if (s2==b+1||s2==0){
		i[s][s2]=1;
                }
	}
}

g.first=a;
g.second=b;

scanf ("%d",&k);

for (s=0;s<k;s++){

scanf ("%d %d",&a,&b);

i[a][b]=1;

}

while (!que.empty()){
	p=que.top();
	que.pop();
	if (i[p.first+1][p.second]==0){
		p.first=p.first+1;
		que.push(p);
		p.first=p.first-1;
	}

	if (i[p.first][p.second+1]==0){
		p.second=p.second+1;
		que.push(p);
		p.second=p.second-1;
	}

		if (p==g){
		count++;
	}

}

printf ("%d\n",count);

}

return 0;
}