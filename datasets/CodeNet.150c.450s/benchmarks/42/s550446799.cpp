#include <iostream>

using namespace std;

struct Task{
	int load;
	int ts;
	Task * next;
	char name[12];
};

Task done;
Task * donelast = &done;
Task * queue;
Task * store;
Task * last;
int n = 0;
int nd = 0;
int q = 0;
int ts = 0;
int main()
{
 	cin >> n;
 	cin >> q;
 	store = new Task[n+1];
 	last = store;
 	for (int i=1;i<=n;i++)
 	{
 		auto & t = store[i];
 		cin >> t.name;
 		cin >> t.load;
 		t.ts = 0;
 		t.next = 0;
 		last->next = &t;
 		last = &t;
 	}
 	last->next =0;
 	
 	while (n!=nd)
 	{
 		auto * t = store;
	 	while(1)
 		{
 			last = t;
 			t = t->next;
 			if(!t) break;
 			ts += q;
 			auto & l =t->load;
 			l -= q;
 			if (l > 0) continue;
 			ts += l;
 			t->ts = ts;
 			donelast->next = t;
 			donelast = t;
 			nd++;
 			last->next = t->next;
 			t = last;
 		}
 	}
 	auto t = done.next;
	for (int i=0; i<n;i++)
	{
		cout << t->name << ' ' << t->ts << endl;
		t = t->next;
	}
	return 0;
}