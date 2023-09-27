#include <iostream>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int a=0,b=0,n=1;
	vector<string> r;
	while (n!=0)
	{
	long ra = 0,rb = 0;
	cin >> n;
	if (n == 0){break;}
	for (int i=0; i<n; i++)
	{
		scanf("%d %d",&a,&b);
		if (a>b)
		{
			ra+=a+b;
		} else if(a<b)
		{
			rb+=a+b;
		} else {
			ra+=a;
			rb+=b;
		}
	}
	ostringstream os;
	os << ra << " " << rb;
	r.push_back(os.str());
	}
	for (int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}