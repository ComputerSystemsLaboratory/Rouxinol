#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string n,right,left;     //n=n枚のカード
	int num;      //num=シャッフル回数
	int num2 = 0; //num2=シャッフル枚数

	while (1){
		cin >> n;
		cin >> num;
		if (n == "-")break;
		for (int i = 0; i < num; i++){
			cin >> num2;
			left = n.substr(0, num2);
			right = n.substr(num2, n.size());
			n = right + left;
		}
		cout << n << endl;
	}
	return 0;
}

