#include <iostream>
using namespace std;
 int main(){
int counter[26];

char ch;

for (int x = 0 ; x <= 25 ; x++){
	counter[x] = 0;
}

while (cin >> ch){
	if (isupper(ch)){
		ch = tolower(ch);
	} 
	int num = ch - 'a';

	if (num >= 0 && num <= 25){
		counter[num]++;
	}
}

for (int x = 0 ; x <= 25 ; x++){
	char y = x + 'a';
	cout << y << ' ' << ':' << ' ';
	cout << counter[x] << endl;
}


 	return 0;

}