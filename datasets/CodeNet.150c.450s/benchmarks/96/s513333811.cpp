#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, len;
	cin >> n;
	for(int i = 0; i < n; ++i){
		string str;
		cin >> str;
		len = str.length();
		string ans;
		char ch = 0;
		for(int j = 0; j < len; ++j){
			if(str[j] == '0' && ch != 0){ 
				ans.push_back(ch);
				ch = 0;
			}else if(str[j] == '1'){
				if(ch == '.'){
					ch = ',';
				}else if(ch == ','){
					ch = '!';
				}else if(ch == '!'){
					ch = '?';
				}else if(ch == '?'){
					ch = ' '; 
				}else{
					ch = '.';
				}
			}else if(str[j] == '2'){
				if(ch == 'a'){
					ch = 'b';
				}else if(ch == 'b'){
					ch = 'c';
				}else{
					ch = 'a';
				}
			}else if(str[j] == '3'){
				if(ch == 'd'){
					ch = 'e';
				}else if(ch == 'e'){
					ch = 'f';
				}else{
					ch = 'd';
				}
				
			}else if(str[j] == '4'){
				if(ch == 'g'){
					ch = 'h';
				}else if(ch == 'h'){
					ch = 'i';
				}else{
					ch = 'g';
				}
			}else if(str[j] == '5'){
				if(ch == 'j'){
					ch = 'k';
				}else if(ch == 'k'){
					ch = 'l';
				}else{
					ch = 'j';
				}
			}else if(str[j] == '6'){
				if(ch == 'm'){
					ch = 'n';
				}else if(ch == 'n'){
					ch = 'o';
				}else{
					ch = 'm';
				}
				
			}else if(str[j] == '7'){
				if(ch == 'p'){
					ch = 'q';
				}else if(ch == 'q'){
					ch = 'r';
				}else if(ch == 'r'){
					ch = 's';
				}else{
					ch = 'p';
				}
			}else if(str[j] == '8'){
				if(ch == 't'){
					ch = 'u';
				}else if(ch == 'u'){
					ch = 'v';
				}else{
					ch = 't';
				}
			}else if(str[j] == '9'){
				if(ch == 'w'){
					ch = 'x';
				}else if(ch == 'x'){
					ch = 'y';
				}else if(ch == 'y'){
					ch = 'z';
				}else{
					ch = 'w';
				}
			}
		}
		cout << ans << endl;
	}
}