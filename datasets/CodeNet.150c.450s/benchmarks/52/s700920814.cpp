#include <iostream>
#include <stack>

using namespace std;
int main(int argc, char const* argv[])
{
	stack<int> data;
	int n;

	while( cin >> n ){
		if( n != 0 ) data.push( n );
		else{
			cout << data.top() << endl;
			data.pop();
		}
	}
	return 0;
}