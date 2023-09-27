#include <stdio.h>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

#define MAX_L (20010)

char s[MAX_L];
int main()
{
    int max_h = 0;
    int cur = 0;
    int index = 0;
    queue<int> part;
    queue<int> lake_left;
    stack<int> lake_right;
    int num_lake = 0;
    int total_area = 0;
    int index_max = 0;
    int index_last = 0;
    scanf("%s", s);

    while ( s[index_last] != 0 ) {
	if ( s[index_last] == '\\' ) {
	    cur--;
	}
	else if ( s[index_last] == '/' ) {
	    cur++;
	    if ( cur > max_h ) {
		index_max = index_last;
		max_h = cur;
	    }
	}
	index_last++;
    }
    index_last--;

    cur = 0;
    max_h = 0;

    while ( index <= index_max ) {
	if ( part.empty() ) {	// ????????´???
	    if ( s[index] == '\\' && cur == max_h ) {
		cur--;
		part.push(cur);
	    }
	    else if ( s[index] == '/' ) {
		cur++;
		max_h = max( max_h, cur );
	    }
	}
	else {
	    if ( s[index] == '\\' ) {
		cur--;
	    }
	    else if ( s[index] == '/' ) {
		cur++;
		max_h = max( max_h, cur );
	    }
	    part.push(cur);

	    if ( cur == max_h ) {
		int part_area = 0;
		while ( !part.empty() ) {
		    int pre = part.front(); part.pop();
		    part_area += ( cur - pre );
		}
		total_area += part_area;
		if ( part_area ) {
		    lake_left.push( part_area );
		    num_lake++;
		}
	    }
	}
	index++;
    }

    max_h = 0;
    cur = 0;
    while ( !part.empty() ) {
	part.pop();
    }
    index = index_last;

    while ( index >= index_max ) {
	if ( part.empty() ) {	// ????????´???
	    if ( s[index] == '/' && cur == max_h ) {
		cur--;
		part.push(cur);
	    }
	    else if ( s[index] == '\\' ) {
		cur++;
		max_h = max( max_h, cur );
	    }
	}
	else {
	    if ( s[index] == '/' ) {
		cur--;
	    }
	    else if ( s[index] == '\\' ) {
		cur++;
		max_h = max( max_h, cur );
	    }
	    part.push(cur);

	    if ( cur == max_h ) {
		int part_area = 0;
		while ( !part.empty() ) {
		    int pre = part.front(); part.pop();
		    part_area += ( cur - pre );
		}
		total_area += part_area;
		if ( part_area ) {
		    lake_right.push( part_area );
		    num_lake++;
		}
	    }

	}
	index--;
    }


    printf("%d\n", total_area);
    printf("%d", num_lake);

    while ( !lake_left.empty() ) {
	printf(" ");
	printf("%d", lake_left.front());
	lake_left.pop();
    }

    while ( !lake_right.empty() ) {
	printf(" ");
	printf("%d", lake_right.top());
	lake_right.pop();
    }

    printf("\n");

    return 0;
}