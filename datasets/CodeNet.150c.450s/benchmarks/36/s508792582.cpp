//0014 Integral

//vñFy=x^2Ay=0Ax=600ÉÍÜê½ÊÏðAÏªÁÛ­ßé
//ßIÈÊÏðoÍµÈ³¢
//üÍÍ¡sÅ^¦çêA1sÉÍ600Ìñd¾¯ªÜÜêé@üÍÌI¹ÍEOFÅ\³êé
//»ê¼êÌüÍdÉÎµAßIÈÊÏð1s²ÆÉoÍ¹æ

//¿ÈÝÉdð¬³­·êÎ·éÙÇA72000000ÉßÃ­

#include<iostream>
using namespace std;

int main(void)
{
	int d;
	const int LIMIT_X = 600;
	while(cin >> d)
	{
		int sum = 0;
		for(int i = d; i < LIMIT_X; i+=d)
		{
			sum += (i*i)*d;
		}
		cout << sum << endl;
	}
	return 0;
}