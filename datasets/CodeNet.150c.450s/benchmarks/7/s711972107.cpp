#include<iostream>
#include<queue>
using namespace std;
int main ()
{
	priority_queue<int> q; int n;
	while (cin >> n) q.push (n);
	for (n = 3; n--;) cout << q.top() << endl, q.pop ();
}