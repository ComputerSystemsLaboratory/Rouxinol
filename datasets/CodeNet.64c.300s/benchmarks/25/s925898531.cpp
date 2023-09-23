#include <iostream>
using namespace std;
void check(int a[], int b[], int *hit, int *blow, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i] == b[j]){
				if(i==j) (*hit)++;
				else (*blow)++;
			}
			
		}
	}
}

	

int main(void)
{
	int a[4];
	int b[4];
	while(cin>>a[0]){
		for(int i=1; i<4; i++){
			cin >> a[i];
		}
		for(int i=0; i<4; i++){
			cin >> b[i];
		}
		int hit = 0;
		int blow = 0;
		check(a,b,&hit,&blow,4);
		cout << hit << " " << blow << endl;
	}	
	return 0;
}