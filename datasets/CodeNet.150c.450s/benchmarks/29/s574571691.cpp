#include<iostream>
#include<list>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> L;
    char command[12];
    int key;

    for( int i = 0; i < n; i++)
    {
        cin >> command;
        if( strcmp( command, "insert" ) == 0 )
        {
            cin >> key;
            L.push_front( key );
        }
	else if( strcmp( command, "delete" ) == 0 )
        {
            cin >> key;
            for( list<int>::iterator j = L.begin() ; j != L.end(); j++)
	    {
                if( key == *j )
                {
                    L.erase(j);
                    break;
                }
	    }
        }
        if( strcmp( command, "deleteFirst" ) == 0 )
        {
            L.pop_front();
        }
        if( strcmp( command, "deleteLast" ) == 0 )
        {
            L.pop_back();
        }
    }

    for( list<int>::iterator i = L.begin(); i != L.end(); )
    {
        cout << *i;
	if( ++i != L.end() )
            cout << ' ';
    }
    cout << endl;

    return 0;
}