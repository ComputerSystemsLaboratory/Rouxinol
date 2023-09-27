#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s, p;
	cin >> s >> p;
	bool flag = false;
	for (int i = 0; i < s.length(); i++){
		for (int j = 0; j < p.length(); j++){
			if (s[(i + j)%s.length()] != p[j]){
				break;
			}
			else if (j == p.length() - 1){
					flag = true;
			}
		}
	}
	if (flag){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}