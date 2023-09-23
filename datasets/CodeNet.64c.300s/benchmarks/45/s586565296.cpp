#include <iostream>

using namespace std;
 
int main(){
    int N,M,P;
 
    while(true){
	cin >> N >> M >> P;
	if(!N && !M && !P) break;
	int nm[101],sum = 0;
	for(int i = 0 ; i < N ; i++){
	    cin >> nm[i];
	    sum += nm[i];
	}
	if(!nm[M-1]){
	    cout << '0' << endl;
	    continue;
	}
	int money = sum*(100-P)/nm[M-1];
	cout << money << endl;
    }
    return 0;
}