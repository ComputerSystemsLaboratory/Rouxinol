#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	do{
		char a[256],b[256];
		for(int i=0; i<n; i++){
			cin >> a[i] >> b[i];
		}

		int num;
		char s;
		cin >> num;
		for(int i=0; i<num; i++){
			cin >> s;
			for(int j=0; j<n; j++){
				if(s==a[j]){
					s=b[j];
					break;
				}
			}
			cout << s;
		}
		cout << endl;
		cin >> n;
	}while(n!=0);
}