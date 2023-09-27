#include <iostream>
using namespace std;

int main()
{
	string sa,sb;
	cin >> sa >> sb;
	int la,lb;
	la = sa.length();
	lb = sb.length();
	bool find;
	for(int i=0; i<la; i++){
		find = true;
		for(int j=0; j<lb; j++){
			int k = (i+j) % la;
			if(sa[k] != sb[j]){
				find = false;
				break;
			}
		}
		if(find) break;
	}
	if(find) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}