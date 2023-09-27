#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n ;
	int ball[11] , b[11] , c[11];
	cin >> n ;
	for(int j=0 ; j<n ; j++){
		int flag=0, cntb=1 , cntc=1;
		for(int i=1 ; i<=10 ;i++){
			cin >> ball[i] ;
		}

		b[0]=0;
		c[0]=0;

		for(int i=1 ; i<=10 ; i++){
			if(b[cntb-1] < ball[i]){
				b[cntb]=ball[i];
				cntb++;
			}else if(c[cntc-1] < ball[i]){
				c[cntc]=ball[i];
				cntc++;
			}else{
				flag++;
				break;
			}
		}
		if(flag==0){
			cout <<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}