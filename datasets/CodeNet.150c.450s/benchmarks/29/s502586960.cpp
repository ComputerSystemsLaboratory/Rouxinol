#include <iostream>
#include <string>
#include <list>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define APPTXT_BUFSZ	128

using namespace std;

static void deleteX(list<int> &list, int x) {
    for(auto itr=list.begin(); itr!=list.end(); itr++ ) {
        if(*itr==x) {
            list.erase(itr);
            break;
        }
    }
}

int main(void) {
    list<int> list;
    int n;
    int x;
    string str;

	getline(cin,str);
	n = atoi(&(str[0]));

	while( n-- > 0 && getline(cin, str) ) {
		if (str[0] == 'i') {		// ("insert"?¢????)
			x = atoi(&(str[sizeof("insert") - 1]));
            list.push_front(x);
        } else {
			int c = str[sizeof("delete") - 1];
			if (isalpha(c)) {
				if (c == 'F') {		// ("deleteFirst"?¢????)
		            list.pop_front();
				} else {			// ("deleteLast"?¢????)
		            list.pop_back();
				}
			} else {				// ("delete"?¢????)
				x = atoi(&(str[sizeof("delete") - 1]));
				deleteX(list, x);
			}
		}
    }

	//display list
    for(auto itr=list.begin(); itr!=list.end(); itr++ ) {
        if(itr==list.begin()) {
			printf("%d", *itr);
        } else {
			printf(" %d", *itr);
        }
    }
	fputc('\n', stdout);

	return 0;
}