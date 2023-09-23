//0008 Sum of 4 Integers
//nツつェツ与ツつヲツづァツづェツつスツづつォツ、a+b+c+d=nツづづ按づゥツ組ツづ個古つ青板づーツ出ツ療債つケツづヲ
//ツづ按つィツ、n<=50ツ、0<=a,b,c,d<=9ツづつキツづゥ
//ツ禿シツ療債づ個終ツづュツづィツづ孔OFツづ与ツつヲツづァツづェツづゥ

#include<iostream>
#include<numeric>
using namespace std;

int main(void)
{
	const int N = 4;
	int a[N];
	int n;
	while( cin >> n)
	{
		int count = 0;
		for(int i = 0; i < 10*10*10*10; i++)
		{
			a[0] = i/10/10/10;
			a[1] = i/10/10%10;
			a[2] = i/10%10;
			a[3] = i%10;
			if(accumulate(a, a+N, 0) == n)
				count++;
		}
		cout << count << endl;
	}
}