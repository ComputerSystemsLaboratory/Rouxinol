#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <set>
//#include <delete>
using namespace std;
const int MAXN = 1e4 + 100;
set <pair< int ,  pair<int , int > > > st;
bool flag [ MAXN ]; 
vector <int> v2;
vector <pair < int , int>  > v [ MAXN ];
int m , n , sum , DEBUGGER = 0 ;
int main()
{
	cin >> n >> m;
	int root = 0;
	for(int i = 0 ; i < m ; i++)
	{
		int a , b , c;
		cin  >> a >> b >> c;
		v [ a ].push_back(make_pair(c , b));
		v [ b ].push_back(make_pair(c , a));
		if(a == root || b == root)
			st.insert(make_pair(c ,  make_pair(a , b )));
	}
	flag [ root ] = true;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		while(true)
		{
			if(flag [ (*st.begin()).second.first ]== false || flag [ (*st.begin()).second.second ] == false)
			{
				DEBUGGER++;
				sum += (*st.begin()).first;
				//cerr << "THE WEIGHT IS : " <<  (*st.begin()).first  << " AND THE VERTEXES ARE : " << (*st.begin()).second.first << " , "<< (*st.begin()).second.second << endl;
				if(flag [ (*st.begin()).second.first] == false)
				{
					int small =  (*st.begin()).second.first;
					st.erase(st.begin());
					flag [small ] = true;
					for(int j = 0  ; j < v [ small ].size() ; j++)
					{
						st.insert(make_pair(v[ small ][ j ].first , make_pair(small , v[ small ][ j ].second)));
					}
				}
				else {
					flag [(*st.begin()).second.second ] = true;
					int small =  (*st.begin()).second.second ;
					st.erase(st.begin());
					for(int j = 0  ; j <  v [ small ].size() ;j++)
					{
						st.insert(make_pair(v[ small ][ j ].first , make_pair(small , v[ small ][ j ].second)));
					}
				}
				break;
			}
			else {
				st.erase(st.begin());
			}
		} 	
	} 
	cout << sum << endl;
}