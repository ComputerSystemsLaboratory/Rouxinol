#include<stack>
#include<cstdio>
using namespace std;

int main(){
	int n;
	int temp;
	stack<int> data;
	
	while(1){
		scanf("%d",&n);
		
		if(n!=0){
			data.push(n);
		}
		else{
			if(data.empty() == true)break;
			else{
				printf("%d\n",data.top());
				data.pop();
			}
		}
	}
	return 0;
}