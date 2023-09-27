#include<iostream>
#include<string>
using namespace std;

string str;

int prin(int a, int b){
	string p;
	p = str.substr(a, b-a+1);
	cout << p << "\n";
	
	return 0;
}

int revers(int a, int b){
	string rev = str.substr(a, b-a+1), rev2 = str.substr(a, b-a+1);
	for (int i = 0; i < b-a+1; i++){
		rev2[i] = rev[b-a-i];
	}
	str = str.replace(a, b-a+1, rev2);

	return 0;
}

int replac(int a, int b, string p){
	str = str.replace(a, b-a+1, p);

	return 0;
}

int main(){
	cin >> str;
	int n;
	cin >> n;

	for (int j = 0; j < n; j++){
		string adj;
		cin >> adj;

		if (adj == "replace"){
			int a, b;
			cin >> a >> b;
			string p;
			cin >> p;

			replac(a, b, p);
		}
		else if (adj == "reverse"){
			int a, b;
			cin >> a >> b;
			
			revers(a, b);
		}
		else if (adj == "print"){
			int a, b;
			cin >> a >> b;
			
			prin(a, b);
		}
		else cout << "ばなな\n";
	}

	return 0;
}
