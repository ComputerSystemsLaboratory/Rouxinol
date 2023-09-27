#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>


using namespace std;

#define MAX_L (20010)
int main()
{
    stack<int> S1;
    stack< pair<int, int> > S2;
    char s[MAX_L];
    int size = 0;
    vector<int> ans;
    int total = 0;
    scanf("%s", s);
    
    while( s[size] != '0' ) {
	size++;
    }

    for ( int i = 0; i < size; i++ ) {
	if ( s[i] == '\\' ) {
	    S1.push( i );
	}
	else if ( s[i] == '/' && !S1.empty() ) {
	    int j = S1.top(); S1.pop();
	    int add_area = ( i - j );
	    total += ( i - j );
	    while( !S2.empty() && S2.top().first > j ) {
		add_area += S2.top().second;
		S2.pop();
	    }
	    S2.push( make_pair( j, add_area ) );
	}
    }
    
    while ( !S2.empty() ) {
	ans.push_back( S2.top().second );
	S2.pop();
    }

    reverse( ans.begin(), ans.end() );

    printf("%d\n", total);
    printf("%d", (int)ans.size());

    for ( int i = 0; i < ans.size(); i++ ) {
	printf(" %d", ans[i]);
    }

    printf("\n");

    return 0;
}