#include<iostream>
#include<stdio.h>
#include<cctype>
#include<string>
using namespace std;

int main(){
	string str,meirei,p,x;
	int q,a,b;

	cin >> str>>q;
	for (int i = 0; i < q; i++){
		cin >> meirei >> a >> b;
		if (meirei == "print"){
			cout << str.substr(a, b-a+1) << endl;
		}
		else if (meirei == "reverse"){
			while (a <= b){
				char temp = str[a];
				str[a] = str[b];
				str[b] = temp;
				a++;
				b--;
			}
		}
		else if (meirei == "replace"){
			cin >> p;
			for (int i = a; i <= b; i++){
				str[i] = p[i - a];
			}
		}
	}

	return 0;
}