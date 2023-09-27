#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;


int toInt( string str )
{
	int result = 0, n = 1;
	int i;

	for( i=0; i<str.size(); i++ ){
		if( isdigit(str[i]) ){
			n = str[i] - '0';
		} else {
			switch( str[i] ){
				case 'm' :
					result += n*1000; break;
				case 'c' :
					result += n*100; break;
				case 'x' :
					result += n*10; break;
				case 'i' :
					result += n*1; break;
			}
			n = 1;
		}
	}
	
	return result;
}

string toString( int num )
{
	string result;
	char table[] = { 'm', 'c', 'x', 'i' };
	int i, n;

	n = 1000;
	for( i=0; i<4; i++ ){
		if( num/n ){
			if( num/n != 1 )
				result += '0'+num/n;
			result += table[i];
			num = num%n;
		}
		n /= 10;
	}

	return result;
}

int main(void)
{
	int n;

	string a, b;

	cin >> n;
	while( n-- > 0 ){
		cin >> a >> b;

		cout << toString( toInt(a)+toInt(b) ) << endl;
	}

	return 0;
}