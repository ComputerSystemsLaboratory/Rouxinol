#include <bits/stdc++.h>
using namespace std;

#define range(i, a, b) for(int i = (a); i < (b); i++)
#define times(i, n) range(i, 0, n)

template<class T> T next() {
	T t;
	cin >> t;
	return t;
}

int main(){
	bool yes[30] = {};
	times(i, 28){
		yes[next<int>()-1]=true;
	}
	times(i,30){
		if(!yes[i]) cout << i+1 << endl;
	}
}