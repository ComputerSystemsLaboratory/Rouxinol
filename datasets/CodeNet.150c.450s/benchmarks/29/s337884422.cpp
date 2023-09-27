#include<iostream>
#include<algorithm>
#include<list>
#include<utility>
#include<string>

using namespace std;

list<int> l;

int main()
{
	cin.tie(0);
	ios::ios_base::sync_with_stdio(false);
	int orders; cin >> orders;
	for (int i = 0; i < orders; ++i) {
		string order; cin >> order;
		if (order == "insert") {
			int x; cin >> x;
			l.emplace_front(x);
		}
		else if (order == "delete") {
			int x; cin >> x;
			for (auto ite = l.begin(); ite != l.end(); ++ite) {
				if (*ite == x) {
					l.erase(ite);
					break;
				}
			}
		}
		else if (order == "deleteFirst")l.pop_front();
		else l.pop_back();
	}
	auto ite = l.begin();
	cout << *ite; ++ite;
	while (ite != l.end()) {
		cout <<" " << *ite;
		++ite;
	}cout << endl;
}