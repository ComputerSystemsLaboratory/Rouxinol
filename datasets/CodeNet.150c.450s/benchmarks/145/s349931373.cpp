#include<iostream>
#include <map>

using namespace std;

int main()
{
	string wordMax;
	map<string, int> n;
	map<string, int>::iterator i, nMax;
	string a;

	wordMax = "";
	while (cin>>a) {
		if ( n.count(a) ) {	// aðkeyÉÂvfª éA»ÌlðCNg
			n[a] ++;
		} else {			// aðkeyÉÂvfªÈ¢A»ÌvfðÇÁ
			n.insert( map<string, int>::value_type(a, 1) );
		}
		if ( a.size() > wordMax.size() ) wordMax = a;
	}

	nMax = n.begin();
	for (i = n.begin(); i != n.end(); i++) {
		if ( (*i).second > (*nMax).second ) nMax = i;
	}

	cout<<(*nMax).first<<" "<<wordMax<<endl;

	return 0;
}