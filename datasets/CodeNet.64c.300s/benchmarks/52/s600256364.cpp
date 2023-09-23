#include <iostream>
using namespace std;

int combination(int least,int n,int s)
{
	int sum = 0;
	if(n==1)
		return (least < s&&s<=9)?1:0;
	else
	{
		int sum  = 0;
		for(int i = least+1;i<=8;i++)sum +=combination(i,n-1,s-i);
		return sum;
	}
};

int main()
{
	while(true)
	{
	int n,s;
	cin >> n;
	cin >> s;
	if(n==0&&s==0)break;
	else cout << combination(-1,n,s) << endl;
	}
	return 0;
}