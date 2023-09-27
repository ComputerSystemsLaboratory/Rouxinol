#include <iostream>
#include <array>

/*This function is a counter for "hit" and "blow".*/
void counter(int* n_a, int* n_b, int* hit, int* blow) {

	*hit = 0;
	*blow = 0;

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			//the case of factor and place are same
			if (n_a[i] == n_b[j] && i == j) {
				*hit = *hit + 1;
			}
			//the case of only factor is same
			else if (n_a[i] == n_b[j]) {
				*blow = *blow + 1;
			}
		}
	}
}

int main() {

	std::array<int, 4> n_a;//selection of "A"
	std::array<int, 4> n_b;//selection of "B"

	while (std::cin >> n_a[0] >> n_a[1] >> n_a[2] >> n_a[3] && std::cin >> n_b[0] >> n_b[1] >> n_b[2] >> n_b[3]) {
		//std::cin >> n_a[0] >> n_a[1] >> n_a[2] >> n_a[3];
		//std::cin >> n_b[0] >> n_b[1] >> n_b[2] >> n_b[3];

		int hit = 0;//factor and place are same
		int blow = 0;//only factor is same

		counter(n_a.data(),n_b.data(),&hit,&blow);

		std::cout << hit << " " << blow << std::endl;
	}

	return 0;

}