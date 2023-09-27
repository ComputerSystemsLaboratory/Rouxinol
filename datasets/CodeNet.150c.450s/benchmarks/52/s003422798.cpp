#include<stdio.h>
#include<stack>

int main(){
	int data[100],i=0,n=0;
	std::stack<int> train;
	while(scanf("%d",&data[i])!= EOF){
		i++;n++;
	}
	i=0;
	train.push(data[i]);
	for(i=1;i<n;i++){
		if(data[i]==0){
			printf("%d\n",train.top());
			train.pop();
		}else{
			train.push(data[i]);
		}
	}
	return 0;
}