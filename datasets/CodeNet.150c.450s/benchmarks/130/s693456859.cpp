# include <iostream>
# include <vector>

int main() {
	std::vector< std::vector<int> > mat;
	std::vector<int> vec;

	int m, n;
	std::cin >> n >> m;
	
	mat.resize(n);
	for (std::vector< std::vector<int> >::iterator it = mat.begin(); it != mat.end(); ++it) {
		it->resize(m);
	}
	for (std::vector< std::vector<int> >::iterator i = mat.begin(); i != mat.end(); ++i) {
		for (std::vector<int>::iterator j = i->begin(); j != i->end(); ++j) {
			std::cin >> *j;
		}
	}

	vec.resize(m);

	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i) {
		std::cin >> *i;
	}
	
	std::vector<int> ans;

	for (std::vector< std::vector<int> >::iterator i = mat.begin(); i != mat.end(); ++i) {
		int temp = 0;
		std::vector<int>::iterator v = vec.begin();
		for (std::vector<int>::iterator j = i->begin(); j != i->end(); ++j) {
			temp += (*v) * (*j);
			++v;
		}
		ans.push_back(temp);
	}

	for (std::vector<int>::iterator i = ans.begin(); i != ans.end(); ++i) {
		std::cout << *i << std::endl;
	}
	
	std::cin >> n;

	return 0;

}