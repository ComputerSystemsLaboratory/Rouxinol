#include <iostream>
using namespace std;

#define LONG_LONG_MAX 9223372036854775807

int main(){
	long i,n;
	long long min=LONG_LONG_MAX,marginmax=-LONG_LONG_MAX,R;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> R;
		if(R - min > marginmax) marginmax = R-min;
		if(R<min) min=R;
	}
	cout << marginmax << endl;
	return 0;
}