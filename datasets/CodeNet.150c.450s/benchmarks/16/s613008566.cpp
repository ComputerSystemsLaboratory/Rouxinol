#include <iostream>
#include <iomanip>
#include <stack>
#include <vector>
#include <string>
#include <list>
#include <algorithm>


void misc_settings() {
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);

	//std::setprecision(20);
}

int main() {
	
	char in;
	std::stack<int> s1;
	std::stack< std::pair<int,int> > s2;

	int S = 0;

	for (int i = 0; std::cin >> in; i++) {
		int d = 0;
		switch (in) {
		case '\\':
			s1.push(i);
			break;
		case '/':
			if (!s1.empty()) {
				d = i - s1.top(); // d = area of \_____________/
				S += d; 
				int a = 0;
				while ( !s2.empty() && s1.top() < s2.top().first){
					a += s2.top().second; // \\__________/"\___/"/
					s2.pop();
				}
				a += d;
				std::pair<int, int> p(s1.top(), a);
				s2.push(p);
				s1.pop();
			}
			break;
		case '_':
			break;
		}
	}
	std::cout << S << std::endl;

	std::vector<int> v;
	std::cout << s2.size();
	v.resize(s2.size());
	for (std::vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i) {
		*i = s2.top().second;
		s2.pop();
	}
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
		std::cout << " " << *i;
	}
	std::cout << std::endl;

	return 0;
}