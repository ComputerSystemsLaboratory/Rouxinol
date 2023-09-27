#include<iostream>
#include<string>
using namespace std;
int main(){
	char s;
	int i=0,a[127];
	for (int j = 7; j < 123; j++)
		a[j] = 0;
	while (cin >> s){
		if (s < 'a')
			a[s + 32]++;
		else a[s]++;
	}
	
	for (i = 97; i < 123; i++)
		cout  << (char)i << " : " << a[i] << endl;

	return 0;
}