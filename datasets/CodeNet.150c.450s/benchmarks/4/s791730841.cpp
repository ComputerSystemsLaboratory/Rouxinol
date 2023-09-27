#include<iostream>
using namespace std;
int main()
{
	int m[1024], f[1024], r[1024],me;
	char k[1024];
	for(int i=0;i<1024;i++){
		cin >> m[i] >> f[i] >> r[i];
		if (m[i] == -1 && f[i] == -1 && r[i] == -1){ 
			me = i;
			break; 
		}
	}
	for (int i = 0; i < me; i++){
		if (m[i] == -1 || f[i] == -1){
			k[i] = 'F';
		}
		else if (m[i] + f[i] >= 80){
			k[i] = 'A';
		}
		else if (m[i] + f[i] >= 65){
			k[i] = 'B';
		}
		else if (m[i] + f[i] >= 50){
			k[i] = 'C';
		}
		else if (m[i] + f[i] >= 30){
			if(r[i]>=50){
				k[i] = 'C';
			}
			else{
				k[i] = 'D';
			}
		}
		else{
			k[i] = 'F';
		}
		cout << k[i] << endl;;
	}

	return 0;
}