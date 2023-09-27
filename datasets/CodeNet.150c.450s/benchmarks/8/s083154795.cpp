#include <iostream>
#include <string>

using namespace std;

int main()
{
int num = 0,xL = 0,xR = 0,L, R;
string l,r;

cin >> num;

for (int i = 0 ; i < num ; i++ ){
	cin >> l >> r;
	

	
	for (int j = 0  ; j < 100 ; j++ ){


		if (l == r){
			xL++;
			xR++;
			break;
		}
	
		L = l[j] - 'a';
		R = r[j] - 'a';
		

		if (R > L){
			xR += 3;
			break;
		}
	    if (R < L){
			xL += 3;
			break;
		}
		
	}
}
	cout << xL << " " << xR << endl;
	return 0;
}