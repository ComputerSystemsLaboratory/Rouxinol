#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s[200],p[200];
	int judge = 0;
	cin >> s;
	int len = strlen(s);
	for(int i = 0; i < len ; i++){
		s[len + i] = s[i];
	}
	cin >> p;
	for(int j = 0; j <strlen(p) ; j++){
		for(int i = 0; i < 2*len ; i++){
			if(p[j] == s[i]){
				for(int k = 0; k < strlen(p) ;k++){
					if(p[j+k] == s[i+k]){
						judge = 1;
					}
					else{
						judge = 0;
						break;
					}
				}
			}
			if(judge == 1){
				cout << "Yes" << endl;
				goto END;
			}
		}
	}
	cout << "No" << endl;
END:
	return 0;
}