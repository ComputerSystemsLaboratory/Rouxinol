#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	for(int i=1;n>=i;i++){

		if(i%3 == 0)cout << " " << i;
		else if(i%10 == 3)cout << " " << i;
		else {
			int x=i;
		    while(1){
		     	x /= 10;
		     	if(x == 0)break;
		     	if(x%10 == 3){
		     		cout << " " << i;
		     		break;
		       	}
		    }

		}

	}	     

	cout << endl;
	
	return 0;
}