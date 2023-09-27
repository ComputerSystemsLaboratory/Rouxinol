#include<iostream>
using namespace std;

int main()
{
	int i,j,num,sum=0;
	string number;

while(1){
sum =0;
	cin >>number;

	if(number == "0") break;
	for(i=0;i<number.size();i++){
	num = number[i] - '0';
		sum += num;
		}
	cout <<sum <<"\n";
	}
return 0;

}