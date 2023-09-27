#include <iostream>

using namespace std;

int main(){
	while(true){
		int n, p;
		cin >> n >> p;
		if(n == 0 && p == 0){ break; }
		int answer = 0, q = p, stones[50] = { 0 };
		while(true){
			if(q > 0){
				if(++stones[answer] == p){ break; }
				--q;
			}else{
				q = stones[answer];
				stones[answer] = 0;
			}
			answer = (answer + 1) % n;
		}
		cout << answer << endl;
	}
	return 0;
}