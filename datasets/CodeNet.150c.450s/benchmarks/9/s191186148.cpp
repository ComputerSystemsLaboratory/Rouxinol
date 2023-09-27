#include<iostream>
#include<string>
using namespace std;
int main(){
	for (;;){
		string first;
		cin >> first;
		if (first == "-"){ break; }
		int m;
		cin >> m;
		for (; m > 0; m--)
		{
			int h;
			cin >> h;
			string a = first.substr(0, h);
			first.erase(first.begin(), first.begin()+h);
			first += a;
		}
		cout << first<<endl;
	}
	return 0;

}