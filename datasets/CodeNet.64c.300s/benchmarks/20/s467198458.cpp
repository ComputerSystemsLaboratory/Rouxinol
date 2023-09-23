#include<iostream>

using namespace std;

int main(){

	int d;
	while(1){

    cin >> d;

    if(cin.fail()) break;

	int s=0;
	for(int i=1;i<600/d;i++)
	s+=d*(i*d)*(i*d);

    cout << s << endl;


	}

	return 0;
}