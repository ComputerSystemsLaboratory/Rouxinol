#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(){
	long long a,n,max;
	long long goukei = 0;
	long long min = 999999999;
	long long array[1000000];
	cin>>n;
	for(;;){
		for(a=0; a<n; a++) cin>>array[a];
		int max = array[0];
		for(a=0; a<n; a++) if(array[a] > max)max = array[a];
		for(a=0; a<n; a++) if(array[a] < min)min = array[a];
		for(a=0; a<n; a++) goukei += array[a];
		
	cout<<min<<" "<<max<<" "<<goukei<<endl;
	break;
}

		return 0;
}