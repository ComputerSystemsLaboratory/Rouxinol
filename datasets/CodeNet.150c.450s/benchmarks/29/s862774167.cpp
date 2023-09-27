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
	int orders, x; cin >> orders;
	string order;
	for (int i = 0; i < orders; ++i) {
		cin >> order;
		if (order[0] == 'i') {
			cin >> x;
			l.emplace_front(x);
		}
		else if (order[6] == 'F')l.pop_front();
		else if(order[6]=='L')l.pop_back();
		else{
			cin >> x;
			for (auto ite = l.begin(); ite != l.end(); ++ite) {
				if (*ite == x) {
					l.erase(ite);
					break;
				}
			}
		}
	}
	auto ite = l.begin();
	cout << *ite; ++ite;
	while (ite != l.end()) {
		cout <<" " << *ite;
		++ite;
	}cout << endl;
}