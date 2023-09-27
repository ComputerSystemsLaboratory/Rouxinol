#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	int q, num1, num2;
	string str, str2, str3;//str1=最初の文字列 str2=条件当てはめる
	cin >> str >> q;

	for (int i = 0; i < q; i++){
		cin >> str2 >> num1 >> num2;
		if (str2 == "replace"){
			cin >> str3;
			str = str.replace(num1, num2-num1+1, str3);
		}

		else if (str2 == "reverse"){
			while (num1<=num2){
				char tmp;
				tmp = str[num1];
				str[num1] = str[num2];
				str[num2] = tmp;
				num1++;
				num2--;
			}
		}

		else if (str2 == "print"){
			cout << str.substr(num1, num2-num1+1) << endl;
		}
	}

	return 0;
}
