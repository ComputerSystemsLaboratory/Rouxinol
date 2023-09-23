#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
using namespace std;
#define rep(I,N) for(int I = 0; I < (int)(N); I++)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;

int main(void){
	int N;
	cin >> N;
	rep(k, N){
		int a, b, c;
		cin >> a >> b >> c;
		a = pow(a, 2);
		b = pow(b, 2);
		c = pow(c, 2);
		bool flag = false;
		if(sqrt(c) == sqrt(a + b))flag = true;
		if(sqrt(b) == sqrt(a + c))flag = true;
		if(sqrt(a) == sqrt(b + c))flag = true;
		if(flag)cout << "YES"<<endl;
		else FIN("NO");

	}

	return 0;	
}