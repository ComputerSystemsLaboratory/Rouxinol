#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double a, b, c, d, e, f, tmp, s, t;
	
	while((cin >> a >> b >> c >> d >> e >> f)){
		tmp = (a*e-b*d);
		s = ((e*c-b*f)/tmp);
		t = ((a*f-d*c)/tmp);
		
		if(s == -0.0){
			s = 0.0;
		}
		if(t == -0.0){
			t = 0.0;
		}
		printf("%.3f %.3f\n", s, t);
	}
	
	return 0;
}