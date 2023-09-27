#include <iostream>
#include <algorithm>
#include <string>
#include <locale>
#include <stack>
#include <map>
#include <queue>
#include <list>
using namespace std;

void funcInsert(list<int> & arr ) {
	int a; cin >> a;
	arr.push_front(a);
}
void funcDelete(list<int> & arr ) {
	int a; cin >> a;

	list<int>::iterator it = arr.begin(), itend = arr.end();
	for(;it != itend; advance(it,1))
		if (*it == a) {
			arr.erase(it);
			break;
		}

}
void funcDelFirst(list<int> & arr) {
	arr.pop_front();
}
void funcDelLast(list<int> & arr) {
	arr.pop_back();
}
typedef map<string, void(*)(list<int>&)> map_type;
void listprint(list<int> & arr) {
	list<int>::iterator it = arr.begin(), itend = arr.end();
	cout << *it;
	advance(it, 1);
	for (; it != itend; advance(it, 1))
		cout << " " << *it;
	cout << endl;
}

int main(void)
{

	map_type funcs;
	map_type::iterator it;
	funcs.insert(make_pair("insert", funcInsert));
	funcs.insert(make_pair("delete", funcDelete));
	funcs.insert(make_pair("deleteFirst", funcDelFirst));
	funcs.insert(make_pair("deleteLast", funcDelLast));

	list<int> arr;

	int n;
	string comand;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> comand;
		it = funcs.find(comand);
		it->second(arr);
	}
	listprint(arr);


	return 0;
}