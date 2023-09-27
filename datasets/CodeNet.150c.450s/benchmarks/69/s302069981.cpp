#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		stack<int> B, C;
		B.push(0);
		C.push(0);
		int data[10];
		int tmp;
		int i;
		for(int i = 0; i < 10; i++){
			cin >> data[i];
		}
		for(i = 0; i < 10; i++){
			tmp = data[i];
			if(tmp > B.top() && tmp > C.top()){
				if(B.top() >= C.top()){
					B.push(tmp);
				}else{
					C.push(tmp);
				}
			}else if(tmp > B.top()){
				B.push(tmp);
			}else if(tmp > C.top()){
				C.push(tmp);
			}else{
				break;
			}
		}

		if(i == 10){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}