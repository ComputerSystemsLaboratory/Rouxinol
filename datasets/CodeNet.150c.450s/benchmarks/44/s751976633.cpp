#include <iostream>

using namespace std;
 
int main(){
	int a[4],b[4];
	int H,B;
     while(cin >> a[0],!cin.eof()){
		H=0,B=0;
		for(int i=1;i<4;i++)
			cin >> a[i];
		for(int i=0;i<4;i++)
			cin >> b[i];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[i]==b[j]){
					if(i==j)
						H++;
					else
						B++;
				}
			}
		}
		cout << H << ' ' << B << endl;
	}
    return 0;
}