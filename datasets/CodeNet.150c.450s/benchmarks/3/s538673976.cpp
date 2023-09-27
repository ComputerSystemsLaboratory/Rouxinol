#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	int n;
	cin >> str;
	cin >> n;
	for(int z=0;z<n;z++){
		string ope;
		cin >> ope;
		if(ope=="print"){
			int s,g;
			cin >> s >> g;
			for(int i=s;i<=g;i++){
				cout << str[i];
			}
			cout << endl;
		}
		else if(ope=="reverse"){
			string temp;
			int s,g;
			cin >> s >> g;
			for(int i=s;i<=g;i++){
				temp.push_back(str[i]);
			}
			for(int i=0;i<temp.length();i++){
				str[s+i]=temp[temp.length()-1-i];
			}
		}
		else if(ope=="replace"){
			int s,g;
			string temp;
			cin >> s >> g >> temp;
			for(int i=s;i<=g;i++){
				str[i]=temp[i-s];
			}
		}
	}

	return 0;
}