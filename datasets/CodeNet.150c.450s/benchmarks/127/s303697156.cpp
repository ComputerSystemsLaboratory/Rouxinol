#include <iostream>
#include <unordered_set>

class Organizer {
private:
	std::unordered_set<std::string> _candidates;

	static std::string reverse(const std::string&);
	void into_departure(const std::string& a, const std::string& b);
	void into_storage(const std::string& a, const std::string& b);
public:
	void organize(const std::string& original);
	size_t count() const;
};

void Organizer::organize(const std::string& original) {
	for (size_t i = 1; i < original.length(); ++i) {
		into_storage(original.substr(0, i), original.substr(i));
	}
}

void Organizer::into_storage(const std::string& a, const std::string& b) {
	into_departure(a, b);
	into_departure(reverse(a), b);
	into_departure(a, reverse(b));
	into_departure(reverse(a), reverse(b));
}

std::string Organizer::reverse(const std::string& str) {
	return std::string(str.rbegin(), str.rend());
}

void Organizer::into_departure(const std::string& a, const std::string& b) {
	_candidates.emplace(a + b);
	_candidates.emplace(b + a);
}

size_t Organizer::count() const {
	return _candidates.size();
}

int main() {
	size_t count;
	std::cin >> count;
	for (size_t i = 0; i < count; ++i) {
		Organizer o;
		std::string line;
		std::cin >> line;
		o.organize(line);
		std::cout << o.count() << std::endl;
	}
}