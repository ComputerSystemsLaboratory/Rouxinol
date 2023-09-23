#include<iostream>
using namespace std;

int main()
{
	int n;
	int i;
	
	cin >> n;
	
	for(i=1;i<=n;i++){
		if(i%3==0)
			cout << ' ' << i;
		else if(i%10==3)
			cout << ' ' << i;
		else if((i/10)%10==3)
			cout << ' ' << i;
		else if((i/100)%10==3)
			cout << ' ' << i;
		else if((i/1000)%10==3)
			cout << ' ' << i;
	}
	cout << endl;
	
	return 0;
}