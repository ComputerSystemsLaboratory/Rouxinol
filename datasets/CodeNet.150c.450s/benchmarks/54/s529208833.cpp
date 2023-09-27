#include <iostream>
#include <string>
#include <algorithm>    // std::transform
using namespace std;

int main(int argc, char const *argv[])
{
	string W, T;
	int count = 0;
	cin >> W;
	while(cin >> T) {
	    if(T.compare("END_OF_TEXT") == 0) break;
	    transform(T.begin(),T.end(),T.begin(),::tolower);
	    if(T.compare(W) == 0) ++count;
	}
	cout << count << endl;
	return 0;
}