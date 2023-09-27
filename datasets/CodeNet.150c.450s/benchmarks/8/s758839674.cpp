#include <iostream>
#include <string>
#include <cctype>

using namespace std;




int main(){
	
	int n;
	string str1, str2;
	int c1 = 0, c2 = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> str1 >> str2;
		if (str1 > str2) c1 += 3;
		else if (str1 < str2) c2 +=3;
		else {c1++; c2++;}
		
	}	

		cout << c1 << " " << c2 << endl;
	
	return 0;
}