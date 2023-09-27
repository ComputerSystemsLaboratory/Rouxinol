#include <iostream>
#include <string>

using namespace std;

char mcxi[5]="mcxi";
int digit[5]={1000, 100, 10, 1, 0};

int main(){
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		string str;
		for(int j=0; j<2; j++){
			string tmp; cin >> tmp;
			str+=tmp;
		}

		int sum=0, tmp=1;
		for(int j=0; str[j]!='\0'; j++){
			if(isdigit(str[j])) tmp=str[j]-'0';
			else{
				for(int k=0; k<4; k++){
					if(str[j] == mcxi[k]) sum+= tmp*digit[k];
				}
				tmp=1;
			}
		}

		string out;
		for(int i=0; i<4; i++){
			int tmp = sum/digit[i] % 10;
			if(tmp>1) out += ('0'+tmp);
			if(tmp) out += mcxi[i];
		}
		cout << out <<endl;
	}
}
