
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
	
	string a;
	getline(cin,a);
	int i = 0;
	while(a[i] != '\0'){
		if('A' <= a[i] && a[i] <= 'Z'){	a[i] += 'a'-'A';	}
		else if('a' <= a[i] && a[i] <= 'z'){	a[i] -= 'a'-'A';	}
		i++;
	}
	
	cout << a <<"\n";
	return 0;
}