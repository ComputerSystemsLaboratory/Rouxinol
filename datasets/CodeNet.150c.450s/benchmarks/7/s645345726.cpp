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
	pq que;
	rep(i, 10){
		int a;
		cin >> a;
		que.push(a);
	}
	rep(i, 3){
		int x = que.top();
		que.pop();
		cout << x << endl;
	}
	return 0;	
}