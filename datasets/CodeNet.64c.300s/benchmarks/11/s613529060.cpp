#include <iostream>
using namespace std;

int main()
{
	int s;
	cin >> s;
	if(0>s||s>86400)
		cin >>s;
	cout<<s/3600<<":"<<s%3600/60<<":"<<s%3600%60<<endl;
	return 0;
}