
#include <iostream>
#include <iomanip>
using namespace std;

double eucAlg(int a,int b);


int main(int argc, char* argv[])
{
	double a,b;	//??\??????
	double c, d;	//??????

	while(cin >> a >> b){

		c = eucAlg(a, b);

		d = a * b / c;
		cout << fixed << setprecision(0) << c << " " << d << endl;
	}
	return 0;
}

//??????????????????????????????
double eucAlg(
	int a,
	int b
	)
{
	double c;

	do
	{
		c = a % b;
		if(c == 0){
			break;
		}
		a = b;
		b = c;

	}while(1);

	return b;
}