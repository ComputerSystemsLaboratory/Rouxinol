#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n, ball;cin >> n;
	stack<int> r, l;
	while(n--){
		r.push(0);l.push(0);
		bool f = false;
		for(int i = 0;i < 10;i++){
			cin >> ball;
			if(f == true)continue;
			if(r.top() < ball){
				r.push(ball);
			}else if(l.top() < ball){
				l.push(ball);
			}else{
				f = true;
			}
		}
		while(!r.empty())r.pop();
		while(!l.empty())l.pop();
		if(f == false)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}