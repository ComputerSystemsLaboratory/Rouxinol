#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main() {
	stack<int> S,T;
	string geo;
	int i,sum,deepness,part;
	i = 0;
	sum = 0;
	deepness = 0;
	part = 0;
	cin >> geo;
	while(geo[i]!='\0') {
		//cout << i << endl;
		if(geo[i]=='\\') {
			if(i!=0) {
				if((geo[i-1] != '\\') && (part != 0) ) {
					while((! T.empty())&& (deepness < T.top() )) {
						T.pop();
						int n = T.top();
						T.pop();
						part += n;
					}
					if(part !=0) T.push(part);
					T.push(deepness);
					part = 0;
				}
			}
			S.push(i);
			deepness +=1;
            //cout << deepness << endl;
		}
		else if(geo[i]=='/') {
			if(! S.empty()) {
				int k=S.top();
				S.pop();
				sum += i - k;
				part += i-k;
				deepness -= 1;
				//cout << deepness << endl;
			}
		}
		++i;
	}
	cout << sum << endl;
	if(part !=0) {
		while((! T.empty()) && (deepness < T.top() )) {
			T.pop();
			int n = T.top();
			T.pop();
			part += n;
		}
		T.push(part);
		T.push(deepness);
		part = 0;
	}
	i =0;
	stack<int> INV;
	while (! T.empty()) {
		T.pop();
		int m=T.top();
		T.pop();
		INV.push(m);
		++i;
	}
	cout << i;
	for(int l =0 ; l<i; ++l) {
		int m = INV.top();
		INV.pop();
		cout << " " << m;
	}
	cout << endl;
	return 0;
}