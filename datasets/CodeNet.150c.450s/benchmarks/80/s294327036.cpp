#include <iostream>
using namespace std;
int a,b,c,d,e,f,g,h,s,t;
int main()
{



	cin >> a >> b >> c >> d;
	cin >> e >> f >> g >> h;
	s = a+b+c+d;
	t = e+f+g+h;
	if(s > t){
		cout << s;
	}else{
		cout << t;
	}

	cout << endl;

	return 0;
}