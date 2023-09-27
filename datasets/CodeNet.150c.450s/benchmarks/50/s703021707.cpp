#define _USE_MATH_DEFINES
#define INF 100000000
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>

using namespace std;

typedef long long ll;
typedef pair <int,int> P;

static const double EPS = 1e-8;


int main(){
	int n;
	while(~scanf("%d",&n)){
		if(n==0) break;
		int money = 1000 - n;
		int res = 100000;
		for(int i=0;i<=2;i++){
			for(int j=0;j<=10;j++){
				for(int k=0;k<=20;k++){
					for(int l=0;l<=100;l++){
						for(int m=0;m<=200;m++){
							if(500*i+100*j+50*k+10*l+5*m > money) continue;
							else res = min(i+j+k+l+m + (money - (500*i+100*j+50*k+10*l+5*m)),res);
						}
					}
				}
			}
		}

		printf("%d\n",res);
	}

}