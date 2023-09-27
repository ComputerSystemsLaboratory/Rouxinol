#include<iostream>

using namespace std;

int main(void){
	int X,Y;
	int i = 0;

	while (1){
		cin >> X>>Y;

		if (X == 0&&Y==0){
			break;
		}

		if (X <= Y){
			cout << X<<" "<<Y << endl;

		} else{
			cout << Y << " " << X << endl;
		}
	}


	//system("pause");
	return 0;
}