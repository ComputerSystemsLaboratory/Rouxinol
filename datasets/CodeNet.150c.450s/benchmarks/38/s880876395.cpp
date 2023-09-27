#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
	int n,a,b,c;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b >> c;
		puts(((a * a + b * b == c * c)||(a * a + c * c == b * b)||(b * b + c * c == a * a))?"YES":"NO");
	}
}