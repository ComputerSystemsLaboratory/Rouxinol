#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int total1 = 0,total2 = 0;
	string str1,str2;
	for(int i = 0; i < n; i++){
		cin >> str1 >> str2;
		if(str1 > str2){
			total1 += 3;
		}else if(str1 < str2){
			total2 += 3;
		}else{
			total1++;
			total2++;
		}
	}
	cout << total1 << " " << total2 << endl;
	return 0;
}