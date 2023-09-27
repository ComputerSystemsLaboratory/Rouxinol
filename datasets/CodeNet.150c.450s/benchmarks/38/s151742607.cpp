#include <iostream>
using namespace std;

int check(int a, int b, int c);

int main(){
	int N = 0;
	int A, B, C;
	int i, j, k;
	int work;
	cin >> N;
	for(i = 0; i < N; i++){
		cin >> A >> B >> C;

		if(check(A, B, C)){
				cout << "YES\n";				
		}
		
		else{
			cout << "NO\n";
		}
    }
    return 0;
}

int check(int a, int b, int c){
    if( (a * a + b * b) == c * c || (b * b + c * c) == a * a || (c * c + a * a) == b * b ){
        return 1;
    }
    
    else{
        return 0;
    }
	
}