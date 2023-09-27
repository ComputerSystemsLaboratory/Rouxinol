#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int f(int x){
	return pow(x,2);
}

int main(){
	int	input(0);
	int N(600);
	int s(0);
	while(cin >> input){
		for (int i = 1; i < N / input -1; i++){
			s += f(input * i) * input;
		}
    s += f(N -input) * input;
	cout << s << endl;
        s= 0;

	}
}