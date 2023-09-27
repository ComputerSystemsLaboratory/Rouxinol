#include<iostream>
using namespace std;

int main(void){
	int a[4];
	int b[4];
	int h,br;
	
	while(cin >> a[0] >> a[1] >> a[2] >> a[3]>> b[0] >> b[1] >> b[2] >> b[3]){
		
		h=0;
		br=0;
		
		for(int k=0;k<4;k++){
			for(int l=0;l<4;l++){
				if(a[k]==b[l]){
					if(k==l) h++;
					else br++;
				}
			}
		}
		
		cout << h << ' '<< br << endl;
	}
}