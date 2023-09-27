#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
	double A, B, C, D, E, F, X, Y, G , H;

	while(cin >> A >> B >> C >> D >> E >> F)
	{
		X=(C*E-F*B)/(A*E-D*B);
		Y=(A*F-D*C)/(A*E-D*B);

		if(X==0){
			X=0;
		}

		if(Y==0){
			Y=0;
		}

		printf("%.3f %.3f\n",X,Y);
	}
}