#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int n,i,j,ans=0,end;
	long num; 
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		num<10000?end=num:end=10000;
		for(j=2;j<end;j++) if(num%j==0&&num!=j){num=0;break;}
		num!=0?ans++:1;
	}
	cout << ans << endl;
}