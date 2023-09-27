#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n;
	string x;
	while(cin >> n, n){
		int l = 0, r = 0;
		int res = 0;
		int next = 1;
		for(int i = 0;i < n;i++){
			cin >> x;
			if(x == "lu")l = 1;
			if(x == "ru")r = 1;
			if(x == "ld")l = 0;
			if(x == "rd")r = 0;
			if(l == next && r == next){
				next ^= 1;
				res++;
			}
		}
		cout << res << endl;
	}
	return 0;
}