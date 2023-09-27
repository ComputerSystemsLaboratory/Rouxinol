#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
int top = 0;
stack<int> S;
int a,b,x,y;
char s[1000];

int main(){
	while(scanf("%s",s) != EOF){
		if(s[0] == '+'){
			a = S.top();
			S.pop();
			b = S.top();
			S.pop();
			y = a + b;
			S.push(y);
		}else if(s[0] == '-'){
			a = S.top();
			S.pop();
			b = S.top();
			S.pop();
			y = b - a;
			S.push(y);
		}else if(s[0] == '*'){
			a = S.top();
			S.pop();
			b = S.top();
			S.pop();
			y = a * b;
			S.push(y);
		}else{
			x = atoi(s);
			S.push(x);
		}
	}
	cout << S.top() << endl;
}