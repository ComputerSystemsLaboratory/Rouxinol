#include <iostream>

using namespace std;

int main(){
	long long int N, A, B, C, X, Y[105];
	long long int ans;

	while(true){
		cin >> N >> A >> B >> C >> X;
		if( 0==(N|A|B|C|X) )
			break;
		ans = 0;
		
		for(int i=0; i<N; i++){
			cin >> Y[i];
		}
		for(int i=0; i<N&&ans<10002; ans++){
			if( X == Y[i] ){
				i++;
			}
			X = (A*X + B) % C;
		}

		cout << ((ans-1<=10000)?ans-1:-1) << endl;
	}
	return 0;
}