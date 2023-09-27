#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>

typedef long long ll;
using namespace std;


int sum(int i,int* bit){
	int s = 0;
	while(i > 0){
		s += bit[i];
		i -= i & -i;
	}
	return s;
}

void add(int i, int x,int* bit,int n){
	while(i <= n){
		bit[i] += x;
		i += i & -i;
	}	
}

int main()
{
	int T;
	while(~scanf("%d",&T)){
		if(T==0) break;
		int* bit = new int[T+1]();	
		int res=numeric_limits<int>::min();
		for(int t=1;t<=T;t++){
			int tmp;
			scanf("%d",&tmp);
			add(t,tmp,bit,T);
		}

		for(int a=0;a<=T;a++){
			for(int b=a+1;b<=T;b++){
				res=max(sum(b,bit) - sum(a,bit),res);
			}
			//cout << sum(a,bit) << endl;
		}
		
		printf("%d\n",res);
	}
}