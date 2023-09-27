#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,H=0,T=0;
	string str1,str2;
	cin >> n;

	for(int i=0; i<n; i++){
        cin >> str1 >> str2;
        if( str1 > str2)T+=3;
        else if( str1 < str2)H+=3;
        else T+=1,H+=1;
	}

	cout << T << " " << H << endl;

	return 0;
}