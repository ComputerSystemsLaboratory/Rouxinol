#include<cstdio>
#include<stack>
using namespace std;
int a[10],flag;
stack<int>s1,s2;
void dfs(int i){
	if(i==10){flag=1;return ;}
	if(a[i]>s1.top()){
		s1.push(a[i]);
		dfs(i+1);
		s1.pop();
	}
	if(a[i]>s2.top()){
		s2.push(a[i]);
		dfs(i+1);
		s2.pop();
	}
	return ;
}
int main(void){
	int T;scanf("%d",&T);
	while(T--){
		while(!s1.empty())s1.pop();
		while(!s2.empty())s2.pop();
		flag=0;
		for(int i=0;i<10;i++)
			scanf("%d",a+i);
		s1.push(0),s2.push(0);
		dfs(0);
		printf(flag?"YES\n":"NO\n");
	}
}