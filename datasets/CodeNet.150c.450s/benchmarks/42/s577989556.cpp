#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;

int top = 0;
int last = 0;
int s[1000010];
string name[1000010];

void push(string a, int n){
	s[last] = n;
	name[last] = a;
	++last;
}

int front_time(){
	return s[top];
}

string front_name(){
	return name[top];
}

void pop(){
	++top;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, q;
	cin >> n >> q;

	for(int i = 0; i < n; ++i){
		string name;
		int t;
		cin >> name >> t;
		push(name, t);
	}

	int ntime = 0;
	while(top < last){
		int a = front_time();
		if(a <= q){
			ntime += a;
			cout << front_name() << " " << ntime << endl;
			pop();
		}
		else {
			a -= q;
			ntime += q;
			push(front_name(), a);
			pop();
		}
	}

	return 0;
}