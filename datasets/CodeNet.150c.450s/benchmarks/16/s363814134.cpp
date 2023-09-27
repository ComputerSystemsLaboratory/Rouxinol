#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<stack>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair<int,int> p1;
int main(){
char c;	
int i=0;
stack<int> s1;
stack<p1> s2;
while(scanf("%c",&c)!=EOF){
	if (c=='\\'){s1.push(i);}
	else if(c=='/'&&s1.size()>0){
		int j=s1.top();s1.pop();
		int a=i-j;
		p1 p=make_pair(j,a);
		while(!s2.empty()&&p.first<s2.top().first){
			a+=s2.top().second;s2.pop();
			p=make_pair(j,a);
		}
		s2.push(p);
	}
	i++;
}
stack<int> p;int sum=0;int count=0;
while(!s2.empty()){
	int i=s2.top().second;s2.pop();
	sum+=i;
	count++;
	p.push(i); 
}
printf("%d\n",sum);
printf("%d",count);
while(!p.empty()){
	int i=p.top();p.pop();
	printf(" %d",i);
}
cout<<endl;
}


