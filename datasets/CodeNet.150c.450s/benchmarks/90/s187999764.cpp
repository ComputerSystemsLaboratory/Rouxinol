#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int , int > P;
P data[101];
int in;

int main(void)
{

	for(int i = 0; i <= 100; i++)
		data[i].second = i;
	while(cin >> in, !cin.eof()){
		data[in].first++;
	}

	sort(data,data+101);
	int def = data[100].first;
	for(int i = 0; i <= 100; i++)
		if(data[i].first == def)
		cout << data[i].second << endl;

	return 0;
}