#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int x;
	deque<int> d;
	while(cin >> x){
		if(x == 0){
			cout << d.back() << endl;
			d.pop_back();
		}else{
			d.push_back(x);
		}
	}
	return 0;
}