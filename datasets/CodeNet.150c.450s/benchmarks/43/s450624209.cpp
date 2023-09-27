#include <iostream>
#include <vector>

bool get_input(std::vector<int>& cards_a, std::vector<int>& cards_b)
{
	int n;
	std::cin >> n;

	if (n == 0) return false;

	cards_a.clear(), cards_b.clear();
	int card_a, card_b;
	for (int i = 0; i < n; i++) {
		std::cin >> card_a >> card_b;
		cards_a.push_back(card_a);
		cards_b.push_back(card_b);
	}
	return true;
}

void calc_and_output(std::vector<int>& cards_a, std::vector<int>& cards_b)
{
	int point_a = 0, point_b = 0;
	std::vector<int>::iterator a_itr = cards_a.begin();
	std::vector<int>::iterator b_itr = cards_b.begin();
	for (; a_itr != cards_a.end() && b_itr != cards_b.end(); a_itr++, b_itr++) {
		if (*a_itr > *b_itr) {
			point_a += (*a_itr + *b_itr);
		} else if (*a_itr < *b_itr) {
			point_b += (*a_itr + *b_itr);
		} else {
			point_a += *a_itr;
			point_b += *b_itr;
		}
	}
	std::cout << point_a << " " << point_b << std::endl;
}

int main()
{
	std::vector<int> cards_a, cards_b;
	while (get_input(cards_a, cards_b)) {
		calc_and_output(cards_a, cards_b);
	}
	return 0;
}