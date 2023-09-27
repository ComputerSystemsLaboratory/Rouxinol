#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,t=0,h=0;
	cin >> n;
	for (; n > 0; n--)
	{
		string taro, hanako;
		cin >> taro >> hanako;
		if (taro < hanako){ h += 3; }
		else if (taro>hanako){ t += 3; }
		else { t += 1; h += 1; }
	}
	cout <<t<< " " << h << endl;
	return 0;

}