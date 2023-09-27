#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	stack<int> train;

	int n;
	while(scanf("%d", &n) != EOF){
		if(n)
			train.push(n);
		else{
			printf("%d\n", train.top());
			train.pop();
		}
	}

	return 0;
}