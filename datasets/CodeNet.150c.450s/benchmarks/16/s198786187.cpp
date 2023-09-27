#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int sum = 0;
    int a = 0;
    char ch;
    stack< int > total;
    stack< pair< int , int > > subs;

    for( int i = 0; cin >> ch; i++)
    {
        if( ch == '\\' )
        {
            total.push( i );
        }
        else if( ch == '/' && total.size() > 0 )
        {
            
            int j = total.top();
            total.pop();
            sum += i - j;
	    a = i - j;
            while( subs.size() > 0 && subs.top().first > j )
	    {
                a += subs.top().second;
		subs.pop();
	    }
	    subs.push( make_pair( j, a ) );
        }
    }
    
    vector< int > ans;
    cout << sum << endl;
    cout << subs.size();
    while( !subs.empty() )
    {
        ans.push_back( subs.top().second );
	subs.pop();
    }
    reverse( ans.begin(), ans.end() );
    for( int i = 0; i < ans.size(); i++)
    {
        cout << ' ' << ans[i];
    }
    cout << endl;
    return 0;
}