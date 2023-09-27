//0030 Sum of Integers
//0 ©ç 9 Ì©çÙÈé n ÂÌðæèoµÄvª s ÆÈégÝí¹ÌðoÍµÄI¹·évOðì¬µÄ­¾³¢B
//n ÂÌÍ¨Ì¨Ì 0 ©ç 9 ÜÅÆµAPÂÌgÝí¹É¯¶Íg¦Ü¹ñ

#include<iostream>
using namespace std;

static const int N = 10;
int n, s;
bool isUse[N];

int Calc(int d, int useNum, int sum)
{
	if(sum > s || useNum > n || useNum+(N-d) < n)
		return 0;
	if(d == 10)
	{
		if(sum == s)
			return 1;
		else
			return 0;
	}
	
	int result = 0;
	isUse[d] = true;
	result += Calc(d+1, useNum+1, sum+d);
	isUse[d] = false;
	result += Calc(d+1, useNum, sum);

	return result;
}

int main(void)
{
	while(cin >> n >> s, n)
	{
		fill(isUse, isUse+N, false);
		cout << Calc(0, 0, 0) << endl;
	}
	return  0;
}