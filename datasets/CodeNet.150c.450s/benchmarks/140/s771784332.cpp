//BINARY_BOY!!
//THINK TWICE CODE ONCE { TRUE }
// #####   ###  ##   #   ###   #####   #   #  #####	 ####   #   #
// #    #   #   # #  #  #   #  #    #   # #   #	#	#	 #   # #	
// #####    #   #  # #  #####  #####     #    #####	#	 #	  #	
// #    #   #   #   ##  #   #  #   #     #    #	#	#	 #    #
// #####   ###  #    #  #   #  #    #    #    #####	 ####	  #
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAXN = 10000 + 5;
vector < pair < int  , pair < int , int > > > v ;
int parent [ MAXN ];
int n , m, sum = 0, num [ MAXN ];
bool cmd(pair < int , pair<int , int> > p1 , pair < int , pair<int , int> > p2 )
{
	return p1.first < p2.first;
}
int getroot(int a )
{
	if(parent [ a ] == a)
		return a;
	return getroot (parent [ a ]);	
}
int main() {
	ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++)
	{
		int a , b, c;
		cin >> a >> b >> c;
		v.push_back(make_pair(c , make_pair(a , b)));
	}
	sort(v.begin() , v.end() , cmd);
	for(int i = 0 ; i < n ; i++)
	{
		parent [ i ] = i;
	}	
	for(int i = 0 , j = 0 ; i < v.size() && j < n - 1; i++)
	{
		int ga = getroot(v[ i ].second.first), gb = getroot(v[ i ].second.second);
		if(ga != gb )
		{
			sum += v [ i ].first;
			j++;
			if(num [ ga ] < num [ gb ])
			{
				parent [ ga ] = gb;
				num [ gb ]++;
			}
			else
			{
				parent [ gb ] = ga;
				num [ ga ]++;
			}	
		}
	}
	cout << sum << endl;	
}	