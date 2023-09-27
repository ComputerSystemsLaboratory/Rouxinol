#include <iostream>

using namespace std;

int main()
{
    char a;
    char b[1201];
    cin.get(b,1201);
    int c = 1200;
    int d = -1;
	while(c--)
	{
	    d++;
	    a = b[d];
		if(a >= 97 && a <= 122 )
			a-=32;
		else if(a >= 65 && a<=90)
			a+=32;
        else if(a == '\0')
        {
            cout<<endl;
            break;
        }
        cout<<a;
	}
	return 0;
}
