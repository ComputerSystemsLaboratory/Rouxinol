#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>
#include <valarray>
#include<stack>
#include<sstream>
#include<math.h>

using namespace std;

void GCD()
{
	int x, y;

	cin>>x>>y;
    
	int temp;

    while (y != 0)
	{
		temp = x % y; //x ??¨ y ????????§??¬?´???°??? y ??¨ x % y ????????§??¬?´???°????????????
        x = y;
		y = temp; // at the end, temp = 0
	}

	cout<<x<<endl;
	

}

int main()
{
	GCD();
	return 0;
}