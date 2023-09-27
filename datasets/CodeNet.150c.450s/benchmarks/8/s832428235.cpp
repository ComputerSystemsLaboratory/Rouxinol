#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string a,b;
	cin >> n;
	int countera=0,counterb=0;
	for( int i=0 ; i<n ; i++ ){
		cin >> a >> b;
		int min = a.size();
		if( a.size() > b.size() )
			min = b.size();
		int max=a.size();
		if( a.size() < b.size() )
			max=b.size();
		int counter=0;

		for( int j=0 ; j<min ; j++ ){
			char cha = a[j];
			char chb = b[j];
			if( isupper(cha) )
				a[j] = cha = tolower(cha);
			if( isupper(chb) )
				b[j] = chb = tolower(chb);

			if( cha-'a' < chb-'a' ){
				countera+=3;
				break;
			}
			else if( cha-'a' > chb-'a' ){
				counterb+=3;
				break;
			}
			else{
				counter++;
				if( counter == min ){
					if( max==min ){
							countera++;
							counterb++;
					}
					else if( max==a.size() )
						counterb+=3;
					else
						countera+=3;
					break;
				}

			}
		}
	//	cout << counterb <<" "<<countera << endl;
	}
	cout << counterb <<" " << countera << endl;
}