#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>

typedef long long ll;
using namespace std;

typedef pair<int,int> P;

map<string,int> freq;

int main()
{
	int n;
	while(~scanf("%d",&n)){
		int s;
		scanf("%d",&s);
		
		int* bits = new int[10]();

		for(int i=0;i<n;i++) bits[i] = 1;
		reverse(bits,bits+10);

		if(n==0 && s==0) break;

		int res = 0;
		do{
			int sum = 0;
			for(int i=0;i<10;i++){
				sum += bits[i] ? i : 0;
			}
			//cout << "sum " << sum << endl;
			if(sum == s) res++;
		}while(next_permutation(bits,bits+10));

		cout << res << endl;
	}
}