#include <iostream>
#include <vector>
bool input (std::vector<int> & v)
{
	for (std::vector<int>::size_type i = 0; i < v.size(); i++) {
		if(!(std::cin >> v[i])) return false;
	}
	return true;
}
void get_hit_blow(int & hit, int & blow, std::vector<int> a, std::vector<int> b)
{
	for (int i = 0; i < 4; i++) {
		if (a[i] == b[i]) ++hit;
		for (int j = 0; j < 4; j++) {
			if (a[i] == b[j]) ++blow;
		}
	}
}
int main()
{
	std::vector<int> a(4), b(4);
	while (input(a) && input(b)) {
		int hit = 0, blow = 0;
		get_hit_blow(hit, blow, a, b);
		std::cout << hit << ' ' << blow - hit << std::endl;
	}
}