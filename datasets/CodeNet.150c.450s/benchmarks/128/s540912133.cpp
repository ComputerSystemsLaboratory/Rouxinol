#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char ch[20];
	int i=0;
	while(cin >> ch[i]){
		i++;
	}
	for(int j=i-1 ; j>=0 ; j--){
		cout<<ch[j];
	}
	cout<<endl;
	return 0;
}