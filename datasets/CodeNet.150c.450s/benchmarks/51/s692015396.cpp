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

static const double eps = 1e-8;

int main(){
	int n;
	bool students[30];
	memset(students,0,sizeof(students));

	while(~scanf("%d",&n)){
		students[n-1]=1;
	}

	for(int i=0;i<30;i++){
		if(!students[i]){
			printf("%d\n",i+1);
		}
	}
}