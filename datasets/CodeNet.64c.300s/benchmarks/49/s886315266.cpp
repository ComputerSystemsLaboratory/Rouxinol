#include <iostream>

using namespace std;

class digit{
private:
	int len;
public:
	int scan(int num);
};

int digit::scan(int num){
	len = 0;
	while(num != 0){
		num /= 10;
		len++;
	}
	return len;
}

int main(void){

	int a,b;
	int data[200];
	int i,j;
	i=j=0;
	digit digit;


	while(cin>>a>>b){
		data[i] = digit.scan(a+b);
		i++;
	}

	while(j<i){
		cout << data[j] << endl;
		j++;
	}

	return 0;
}