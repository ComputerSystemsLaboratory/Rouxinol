#include <iostream>
#include <string>
#include <array>

#define ALPHA 26

#define INPUT_LEN 12
#define INPUT_SIZE 2
#define DATA_SIZE (1 << (INPUT_LEN * INPUT_SIZE))

bool memo[INPUT_LEN][DATA_SIZE];

int encode(const std::string& dna, const std::array<int, ALPHA>& dna_map){
	const int length = dna.length();
	
	int code = 0;
	for(int i = length - 1; i >= 0; i--){
		code <<= INPUT_SIZE;
		code |= dna_map[dna[i] - 'A'];
	}
	
	return code;
}

int main(int argc, char* argv[]){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);	
	
	std::array<int, ALPHA> dna_map;
	dna_map.fill(-1);
	dna_map['A' - 'A'] = 0;
	dna_map['C' - 'A'] = 1;
	dna_map['G' - 'A'] = 2;
	dna_map['T' - 'A'] = 3;

	int n;
	std::cin >> n;

	for(int i = 0; i < n; i++){
		std::string ops, dna;
		std::cin >> ops >> dna;

		const int code = encode(dna, dna_map);
		const int length = dna.length() - 1;

		if(ops == "insert"){ memo[length][code] = true; }
		else{ std::cout << (memo[length][code] ? "yes" : "no") << std::endl; }
	}
	
	return 0;
}