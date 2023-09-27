#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
 
int main () {
	int n,i;
	int a,b,c,d,f,g,a1,a2;
	cin >> a >> b >> c >> d >> f >> g ;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a1 >> a2;
		if((a1==a&&a2==b)||(a1==f&&a2==a)||(a1==g&&a2==f)||(a1==b&&a2==g)) cout << c << endl;
		else if((a1==b&&a2==a)||(a1==a&&a2==f)||(a1==f&&a2==g)||(a1==g&&a2==b)) cout << d << endl;
		else if((a1==c&&a2==b)||(a1==f&&a2==c)||(a1==d&&a2==f)||(a1==b&&a2==d)) cout << g << endl;
		else if((a1==b&&a2==c)||(a1==c&&a2==f)||(a1==f&&a2==d)||(a1==d&&a2==b)) cout << a << endl;
		else if((a1==a&&a2==d)||(a1==c&&a2==a)||(a1==g&&a2==c)||(a1==d&&a2==g)) cout << b << endl;
		else if((a1==d&&a2==a)||(a1==a&&a2==c)||(a1==c&&a2==g)||(a1==g&&a2==d)) cout << f << endl;
	}
}
	