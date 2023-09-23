#include <iostream>
using namespace std;

int count = 0;
int search(int n,int m,int i)
{
	
	if(n==0 && m==0){
		count++;
		return 1;
	}
	if(n==0 || i>=10){
		return 0;
		
	}
	search(n-1,m-i,i+1);
	search(n,m,i+1);
	return count;
}
int main()
{
	int n,m;
	while(cin >> n >> m){
		if(n == 0 && m == 0)
			break;
		count = 0;
		cout << search(n,m,0) << endl;
	}
	return 0;
}