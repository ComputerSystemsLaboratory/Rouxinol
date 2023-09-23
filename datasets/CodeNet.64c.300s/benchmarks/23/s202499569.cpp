#include<iostream>

using namespace std;

int main(void){
	int input_h = 0,input_w;
	cin >> input_h>>input_w;
	
	cout << input_h*input_w << " " << 2 * (input_h + input_w) << endl;
	//system("pause");
	return 0;
}