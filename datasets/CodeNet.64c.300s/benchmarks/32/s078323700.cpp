#include <iostream>
using namespace std;
int main(){
	long n, num;
  long max, min;
	long sum=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		sum += num;
		if(i==0){max = num;min = num;}
		else if(max < num) max = num;
		else if(min > num) min = num;
	}
	cout << min << " " << max << " " << sum << endl;
}