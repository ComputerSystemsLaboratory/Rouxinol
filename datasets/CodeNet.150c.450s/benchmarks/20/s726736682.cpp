#include <iostream>
using namespace std ;

int main()
{
	int get ;
	int hour,min,sec ;
	cin >> get ;

	sec = get%60 ;
	get -= sec ;
	min = (get%3600)/60 ;
	get -= min ;
	hour = get/3600 ;

	cout << hour << ":" << min << ":" << sec << endl ;
}