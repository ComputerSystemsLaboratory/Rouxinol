#include <cstdio>
#include <stack>
#define NUM 10
using namespace std;

int N;


int main()
{
	//freopen("in","r",stdin);
	scanf("%d",&N);
	while(N--){
		int tmp;
		bool sol=true;
		stack<int> B,C;
		for(int i=0;i<NUM;i++){
			
			scanf("%d",&tmp);
			if(B.empty())
				B.push(tmp);
			else if(tmp>B.top())
				B.push(tmp);
			else if(C.empty())
				C.push(tmp);
			else if(tmp>C.top())
				C.push(tmp);
			else
				sol = false;
		}
		if(sol)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}