//BINARY_BOY!!
//THINK TWICE CODE ONCE { TRUE }
// #####   ###  ##   #   ###   #####   #   #  #####	#####
// #    #   #   # #  #  #   #  #    #   # #   #	#	#	#	
// #####    #   #  # #  #####  #####     #    #####	#	#		
// #    #   #   #   ##  #   #  #   #     #    #	#	#	#
// #####   ###  #    #  #   #  #    #    #    #####	#####	
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAXN = 10000 + 5;
vector < pair < int  , pair < int , int > > > v ;
vector< int > v2 [ MAXN ];
int n , m, sum = 0, num [ MAXN ];
bool cmd(pair < int , pair<int , int> > p1 , pair < int , pair<int , int> > p2 )
{
	return p1.first < p2.first;
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
	for(int i = 0 ; i <= n ; i++)
	{
		v2[ i ].push_back(i);
		num [ i ] = i;
	}
	for(int i = 0 , j = 0 ; i < v.size() && j < n - 1; i++)
	{
		if(num [ v [ i ].second.first ] != num [ v [ i ].second.second ] )
		{
			sum += v [ i ].first;
			j++;
			if(v2 [ num [v [ i ].second.first ]].size() <  v2 [num[ v [ i ].second.second ]].size())
			{
				for(int f = 0 , l = v2 [ num [v [ i ].second.first ] ].size() , k = num [v [ i ].second.first]; f < l ; f++)
				{
					v2 [ num [v [ i ].second.second ] ].push_back(v2 [ k ][ f ]);
					num [v2 [ k ][ f ]] = num [v [ i ].second.second];
				}
			}
			else {
				for(int f = 0 , l = v2 [ num [v [ i ].second.second ] ].size() , k = num [v [ i ].second.second] ; f < l ; f++)
				{
					v2 [ num [v [ i ].second.first] ].push_back(v2 [ k ][ f ]);
					num [v2 [ k ][ f ]] = num [v [ i ].second.first];
				}
			}
		}
	}
	cout << sum << endl;
}