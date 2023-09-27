#include<iostream>
#include<vector>
#include<queue>

using namespace std;


int main(){
	char a1[5] = {'.',',','!','?',' '}; 
	char a2[3] = {'a','b','c'};
	char a3[3] = {'d','e','f'};
	char a4[3] = {'g','h','i'};
	char a5[3] = {'j','k','l'};
	char a6[3] = {'m','n','o'};
	char a7[4] = {'p','q','r','s'};
	char a8[3] = {'t','u','v'};
	char a9[4] = {'w','x','y','z'};
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		string str;
		cin >> str;
		if (cin.eof()) break;
		char num;
		int cnt = 0;	
		for (int i = 0; i < str.size(); i++){	
			cnt++;
			if (str[i] == '0'){
				if (str[i-1] == '1'){ 
					cout << a1[(cnt - 2)%(sizeof(a1))]  ;
				}else if (str[i-1] == '2'){
					cout << a2[(cnt - 2)%(sizeof(a2))]  ;
				}else if (str[i-1] == '3'){
					cout << a3[(cnt - 2)%(sizeof(a3))]  ;
				}else if (str[i-1] == '4'){
					cout << a4[(cnt - 2)%(sizeof(a4))]  ;
				}else if (str[i-1] == '5'){
					cout << a5[(cnt - 2)%(sizeof(a5))]  ;
				}else if (str[i-1] == '6'){
					cout << a6[(cnt - 2)%(sizeof(a6))]  ;
				}else if (str[i-1] == '7'){
					cout << a7[(cnt - 2)%(sizeof(a7))]  ;
				}else if (str[i-1] == '8'){
					cout << a8[(cnt - 2)%(sizeof(a8))]  ;
				}else if (str[i-1] == '9'){
					cout << a9[(cnt - 2)%(sizeof(a9))]  ;
				}
				cnt = 0;
			}
		}
		cout << endl;
	}
	
return 0;
}