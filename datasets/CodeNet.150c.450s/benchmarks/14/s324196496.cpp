#include<iostream>
using namespace std;

int main(){
	int num;
	cin >> num;

	for(int i = 1; i <= num; i++){
		if( i % 3 == 0 )
			cout << ' ' << i;
		else if( i % 10 == 3 )
			cout << ' ' << i;
		else 
			for(int j = i; j != 0;){
				j /= 10;
				if( j % 10 == 3 ){
					cout << ' ' << i;
					break;
				}
			}
	}
    cout << endl;

    return 0;
}