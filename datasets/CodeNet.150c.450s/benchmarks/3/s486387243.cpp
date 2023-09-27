#include <iostream>
#include <string.h>
#include<algorithm>
using namespace std;

int main()
{
    int i,a,b,q;
	string str,order,rep,rev;
	string left;
	string right;
	cin>>str>>q;
	for(i=0;i<q;i++){
		cin>>order>>a>>b;
		if(order=="replace"){
			cin>>rep;
			left = str.substr(0, a);
			right = str.substr(b+1);
			str = left + rep + right;
		}else if(order=="reverse"){
		    rev = str.substr(a,b - a + 1);
			reverse(rev.begin(),rev.end());
			str.replace(a, b - a + 1, rev);
		}
		else if(order=="print"){
			cout << str.substr(a, b - a + 1) << endl;
		}
	}
    return 0;
}