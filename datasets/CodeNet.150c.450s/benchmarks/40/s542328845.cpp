#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
	int d[6];
	for(int i = 0; i < 6; i++){
			cin >> d[i];
	}
	string str;
	cin >> str;
	int current = 6;
	int n = 5;
	int s = 2;
	int e = 3;
	int w = 4;
	int ot = 1;
	for(int i = 0; i < str.size(); i++){
			if(str[i] == 'N'){
					int temp = current;
					int temp2 = s;
					current = n;
					s = temp;
					n = ot;
					ot = temp2;
			}else if(str[i] == 'S'){
					int temp = current;
					int temp2 = n;
					current = s;
					n = temp;
					s = ot;
					ot = temp2;
			}else if(str[i] == 'W'){
					int temp = current;
					int temp2 = e;
					current = w;
					e = temp;
					w = ot;
					ot = temp2;
			}else if(str[i] == 'E'){
					int temp = current;
					int temp2 = w;
					current = e;
					w = temp;
					e = ot;
					ot = temp2;
			}
	}
	cout << d[ot-1] << endl;
	return 0;
}

