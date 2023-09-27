#include<iostream>

using namespace std;

int ran(int x, int a, int b, int c){
	return (a*x+b) % c;
}

int main(){
	int N,A,B,C,X,Y;
	int count;

	while(cin >> N,N){
		cin >> A >> B >> C >> X;
		count = 0;
		for(int i=0;i<N;i++){
			cin >> Y;
			while(X != Y && count <= 10000){
				X = ran(X,A,B,C);
				count++;
			}
			X = ran(X,A,B,C);
			count++;
		}
		if(count-1 > 10000) count = 0;
		cout << count-1 << endl;
	}


	return 0;
}