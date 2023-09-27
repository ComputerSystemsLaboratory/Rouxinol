#include<stdio.h> 
#include<stack> 
int main(){
	std::stack<int> s;     
	int n;     
	scanf("%d",&n);     
	s.push(n);
	while(scanf("%d",&n)!=EOF){
		if(n!=0)s.push(n);         
		else{             
			printf("%d\n",s.top());             
			s.pop();         
		}     
	} 
} 