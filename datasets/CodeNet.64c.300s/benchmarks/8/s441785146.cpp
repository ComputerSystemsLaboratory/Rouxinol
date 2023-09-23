#include <iostream> 
using namespace std;
void output(int i){
	cout << " " << i;
}
bool include3(int n){
	while(n){
		if (n % 10 == 3){
			return true;
		}
		n /= 10;
	}
	return false;
}
void call(int n){
	for(int i = 1; i <= n; i++){
		if(include3(i)){
			output(i);
		}else if(i % 3 == 0){
			output(i);
		}
	}
	cout << endl;
}

int main(int argc,char *argv[]){
	int n;
	cin >> n;
	call(n);
	return 0;
}