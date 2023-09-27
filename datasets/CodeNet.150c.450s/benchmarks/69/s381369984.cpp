#include<iostream>
using namespace std;
int A[10];
bool dfs(int start, int topB, int topC){
	if(start == 9){
		if(A[start] > topB || A[start] > topC){
			return true;
		}
		else{
			return false;
		}
	}
	bool b1 = false, b2 = false;
	if(A[start] > topB){
		b1 = dfs(start+1, A[start], topC);
	}
	if(A[start] > topC){
		b2 = dfs(start+1,topB,A[start]);
	}
	return (b1 || b2 );
}
int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < 10; ++j){
			cin >> A[j];
		}
		bool result = dfs(0,0,0);
		if(result == true){
			cout << "YES" << endl; 
		}
		else{
			cout << "NO" <<endl; 
		}
	}
	return 0;
}