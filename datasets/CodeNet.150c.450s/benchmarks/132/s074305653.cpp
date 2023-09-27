#include <iostream>
#include <algorithm>
using namespace std;

const int N = 50;

int judge(int* a, int l){
	int s = 0;
	for(int i = 0;i < l;++i){
		s += a[i];
	}
	return s;
}

int main(){
	int n, p, i;
	int ss[N];
	while(cin >> n >> p, n){
		i = 0;
		fill(ss, ss + n, 0);
		while(1){
			if(!p){
				p += ss[i];
				ss[i] = 0;
			}
			else{
				++ss[i];
				--p;
			}
			if(!p){
				if(ss[i] == judge(ss, n)){
					break;
				}
			}
			++i;
			i = i == n ? 0 : i;
		}
		cout << i << endl;
	}
	return 0;
}