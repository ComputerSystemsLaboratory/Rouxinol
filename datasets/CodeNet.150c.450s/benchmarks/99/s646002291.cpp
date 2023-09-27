#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define EPS 1e-8
#define DEB 1


int mcxi_a(char *s){
	int sum = 0;
	int k = 1;
	for(;*s!='\0';s++){
		if( isdigit(*s) ){
			k = *s - '0';
		}else{
			switch(*s){
			  case 'm':
				sum += k*1000; break;
			  case 'c':
				sum += k*100; break;
			  case 'x':
				sum += k*10; break;
			  case 'i':
				sum += k; break;
			}
			k = 1;
		}
	}
	return sum;
}

int main(){
	int n;
	const char mozi[] = {'i','x','c','m'};
	char in1[16],in2[16];
	scanf("%d",&n);
	while(n--){
		scanf("%s %s",in1,in2);
		int sum = mcxi_a(in1) + mcxi_a(in2);
		string ans;
		int tmp = sum;
		int k = 0;
		while(sum>0){
			if( sum%10>0 ){
				ans += mozi[k];
			}
			k++;
			if( sum%10>1 ){
				ans += sum%10+'0';
			}
			sum/=10;
		}
		reverse(all(ans));
		cout << ans << endl;
	}
	return 0;
}