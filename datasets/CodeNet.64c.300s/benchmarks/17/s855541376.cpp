#include <iostream>  
using namespace std;  
int a,b,X,Y,S;
int maximum = 0;

int tax(int a, int b){
	return (b*(100+a))/100;
}

int solve (){
	maximum = 0;
	for (int i=1; i<S; ++i){
		for (int j=i; j<S; ++j){
			if (tax(X,i)+tax(X,j) == S)
				maximum = max(maximum, tax(Y,i)+tax(Y,j));
		}
	}
	return maximum;
	
}

int main()  
{     
	while (cin >> X >> Y >> S && X > 0){
		cout << solve() << endl;
	}        
	
	
	return 0;  
}  