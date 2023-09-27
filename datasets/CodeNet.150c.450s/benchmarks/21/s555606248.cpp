#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main( void )
{
        string str, ans_str;
	int answer;
	
	cin >> str ;
	answer = atoi(str.c_str());
	answer = answer * answer * answer;
	cout << answer << endl;
}