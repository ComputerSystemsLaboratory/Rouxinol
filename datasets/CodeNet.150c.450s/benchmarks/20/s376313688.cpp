#include<set>
using namespace std;
#include<iostream>
int	main(){	int S;
	cin >> S;
	cout << S/3600  << ":" << (S%3600)/60 << ":" << ((S%3600)%60) << endl;

}
