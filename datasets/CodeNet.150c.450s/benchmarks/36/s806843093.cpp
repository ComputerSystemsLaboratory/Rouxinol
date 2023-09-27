#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n){
		int S = 0;
		
		for(int i = 0;600 - i*n != 0;i++){
			S += (i*n)*(i*n) * n;
		}
		
		cout << S << endl;
	}
}