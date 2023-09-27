#include <iostream>
#include <queue>
using namespace std;

int n;
int q;
int ts = 0;
struct Task {int load; char name[12]; };
queue <Task> TQ;
int main()
{
	cin >> n >> q;
	
	for (int i=0; i<n; i++) 
	{
		Task t;
		cin >> t.name >> t.load;
		TQ.push(t);
	}
	
	while(!TQ.empty())
	{
		Task & t = TQ.front();
		if (t.load <= q) 
		{
			ts += t.load;
			cout << t.name << ' ' << ts << endl;
		}
		else
		{
			ts += q;
			t.load -= q;
			TQ.push(t);
		}
		TQ.pop();
	}
	return 0;
}