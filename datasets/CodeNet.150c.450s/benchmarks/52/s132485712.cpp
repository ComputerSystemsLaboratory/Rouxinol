#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	int d;
	stack<int> q;
	while(~scanf("%d",&d)){
		if(d==0){
			printf("%d\n",q.top());
			q.pop();
		}
		else{
			q.push(d);
		}
	}		
}