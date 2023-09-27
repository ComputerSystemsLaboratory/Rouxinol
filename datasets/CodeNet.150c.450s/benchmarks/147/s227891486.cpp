#include <iostream>
#include <string>
#include <math.h>
#include<cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <set>
#include <stdio.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

bool is_integer( double x ){
  return std::floor(x)==x;
}

int main() {
	int N,cnt=0;
	cin>>N;
	for (int n = 1; n <=N; ++n)
	{
	cnt=0;
		
		for (int x = 1; x*x <= n; ++x)
		{
				for (int y = 1; y*y <= n; ++y)
			{
				double zz=(-(x+y)+sqrt(-3*(x*x+y*y)-2*x*y+4*n));

						if (zz>0&&is_integer(zz)&& int(zz)%2==0)
						{
							cnt++;
						}
			}
		}

		printf("%d\n", cnt);

}


return 0;
}
