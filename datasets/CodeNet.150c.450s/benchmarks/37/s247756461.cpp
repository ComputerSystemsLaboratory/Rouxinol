//A§ûö®
//ax + by = c
//dx + ey = f
//ÌððoÍ¹æ@È¨AðÍêÓÉèÜéàÌÆ·é

//üÍÍÀa`fªóÅæØçêÄ^¦çêéiIíèÍHj
//oÍÍxAyðóÅæØÁÄA¬_æ4ðlÌÜüµ½lðoÍ¹æ



#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


void Round(double &refX)
{
	//ë·@¡ñÍ¬_Èºæ4ÅlÌÜüÆ
	const double eps = 0.001;
	if( abs(refX) < eps)
		refX = 0;
}

int main(void)
{
	double a, b, c, d, e, f;
	double x, y;
	while(cin >> a >> b >> c >> d >> e >> f)
	{

		
		//ax+by=c
		//dx+ey=f

		//d(ax+by=c)
		//a(dx+ey=f)
		//ãÓ[ºÓÅ
		//(bd-ae)y=dc-af
		//æÁÄy = (cd-af) / (bd-ae)

		//¯¶­
		//e(ax+by=c)
		//b(dx+ef=f)
		//ãÓ[ºÓÅ
		//(ae-bd)x=ce-bf
		//æÁÄx = (ce-bf) / (ae-bd)

		if(a*e == b*d)
		{
			cout << "ðªêÓÉèÜèÜ¹ñ" << endl;
			continue;
		}

		x = (c*e-b*f) / (a*e-b*d);
		y = (c*d-a*f) / (b*d-a*e);

		//-0Æ©oé±Æª Á½©çÛßé
		Round(x);
		Round(y);

		//¬_Èºà\¦·éæ¤ÉµA¬_æ4ðlÌÜü·é
		cout << setprecision(3);
		cout << setiosflags(ios::fixed);

		cout << x << ' ';
		cout << y << endl;
	}
	return 0;
}