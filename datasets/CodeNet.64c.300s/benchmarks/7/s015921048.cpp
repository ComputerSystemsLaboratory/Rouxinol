#include<iostream>

const int RANK = 13;
const int MARK = 4;

int changeMark(char mark){
	if(mark == 'S') return 0;
	if(mark == 'H') return 1;
	if(mark == 'C') return 2;
	if(mark == 'D') return 3;
}

char changeMarkR(int mark) {
	if(mark == 0) return 'S';
	if(mark == 1) return 'H';
	if(mark == 2) return 'C';
	if(mark == 3) return 'D';
}

int main()
{
	int n;
	std::cin >> n;
	bool cards[MARK][RANK];
	for(int i=0; i<MARK; i++) {
		for(int j=0; j<RANK; j++) {
			cards[i][j] = false;
		}
	}
	char mark_char;
	int mark_number, rank_number, rank_number_array;
	while(std::cin >> mark_char >> rank_number) {
		mark_number = changeMark(mark_char);
		rank_number_array = rank_number - 1;
		cards[mark_number][rank_number_array] = true;
	}
	char output_mark;
	int output_number;
	for(int i=0; i<MARK; i++) {
		for(int j=0; j<RANK; j++) {
			if(cards[i][j] == false) {
				output_mark = changeMarkR(i);
				output_number = j + 1;
				std::cout << output_mark << " " << output_number << "\n";
			}
		}
	}
	return 0;
}