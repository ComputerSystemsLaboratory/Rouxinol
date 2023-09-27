#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	while(cin >> n , n){
		int cou = 0;
		string str[101];
		for(int i=0;i<n;i++){
			cin >> str[i];
			if(i % 2 == 1){
				if(str[i][1] == 'u' && str[i-1][1] == 'u') cou++;
				else if(str[i][1] == 'd' && str[i-1][1] == 'd') cou++;
			}

		}
		cout << cou << endl;
	}
}