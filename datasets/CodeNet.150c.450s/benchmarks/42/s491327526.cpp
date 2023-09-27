#include <iostream>
#include <string>
#include <queue>

using namespace std;

void round_robin()
{
	int n, cpu, ptime;
	string name;
	queue< pair<string, int> > que;

	cin >> n >> cpu;

	for (int i = 0; i < n; ++i)
	{
		cin >> name >> ptime;
		que.push( make_pair(name, ptime) );
	}

	for (int counter = 0; !que.empty(); )
	{
		pair<string, int> tmp = que.front();
		que.pop();
		if( tmp.second <= cpu)
		{
			counter += tmp.second;
			cout << tmp.first << " " << counter << endl;
		}
		else
		{
			counter += cpu;
			que.push(make_pair( tmp.first, tmp.second - cpu ) );
		}
	}

}

int main(int argc, char const *argv[])
{
	round_robin();
	return 0;
}