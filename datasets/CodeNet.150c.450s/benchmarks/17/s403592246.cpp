#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>

using namespace std;

int main()
{
	multiset<int, greater<int> > n;
	multiset<int>::iterator ite;
	int a;

	for(int i=0; i<5; i++){
		cin >> a;
		n.insert(a);
	}
	int i=0;
	for(ite=n.begin(); i<5; ite++, i++){
		if(i==4){ cout << *ite << endl;}
		else{cout << *ite << " ";}
	}

	return 0;
}