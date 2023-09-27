#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
	list<long long>l; long long n; scanf("%lld", &n);
	for (long long i = 0; i < n; i++){
		string s; cin >> s;
		if (s[0] == 'i') { long long k; scanf("%lld", &k); l.push_front(k); }
		else{
			if(s.size() == 6){
				long long k; scanf("%lld", &k);
				for (auto i = l.begin(); i != l.end(); i++){
					if (*i == k) {
						l.erase(i);
						break;
					}
				}
			}
			else if (s[6] == 'F')l.pop_front();
			else l.pop_back();
		}
	}
	bool y = false;
	for (auto i = l.begin(); i != l.end(); i++){
		if (y)cout << ' ';
		cout << *i;
		y = true;
	}
	cout << endl;
}