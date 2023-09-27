#include<iostream>
#include<string>

using namespace std;

int main(){

	string str, cha, code1[50], code2[50];
	int i, j, n, m, flag;

	while(1){
		str = "";
		cin >> n;
		if(!n){break;}
		for(i=0;i<n;i++){
			cin >> code1[i] >> code2[i];
		}
		cin >> m;

		for(i=0;i<m;i++){
			cin >> cha;
			flag = 0;
			for(j=0;j<n;j++){
				if(cha == code1[j]){
					str += code2[j];
					flag = 1;
				}
				else if(j==n-1 && !flag){
					str += cha;
				}
			}
		}

		cout << str << endl;
	}

	return 0;
}