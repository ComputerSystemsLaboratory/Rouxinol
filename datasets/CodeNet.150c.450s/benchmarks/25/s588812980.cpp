#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	
	std::string Letter;
	int Count[26] = {0};
	
	while(getline(cin, Letter)){
		
		for(int i = 0; i < 26; i++){
			int p = i;
			char alphabet;
			char Alphabet;
			
			if(p == 0 ) alphabet = 'a';
			if(p == 1 ) alphabet = 'b';
			if(p == 2 ) alphabet = 'c';
			if(p == 3 ) alphabet = 'd';
			if(p == 4 ) alphabet = 'e';
			if(p == 5 ) alphabet = 'f';
			if(p == 6 ) alphabet = 'g';
			if(p == 7 ) alphabet = 'h';
			if(p == 8 ) alphabet = 'i';
			if(p == 9 ) alphabet = 'j';
			if(p == 10) alphabet = 'k';
			if(p == 11) alphabet = 'l';
			if(p == 12) alphabet = 'm';
			if(p == 13) alphabet = 'n';
			if(p == 14) alphabet = 'o';
			if(p == 15) alphabet = 'p';
			if(p == 16) alphabet = 'q';
			if(p == 17) alphabet = 'r';
			if(p == 18) alphabet = 's';
			if(p == 19) alphabet = 't';
			if(p == 20) alphabet = 'u';
			if(p == 21) alphabet = 'v';
			if(p == 22) alphabet = 'w';
			if(p == 23) alphabet = 'x';
			if(p == 24) alphabet = 'y';
			if(p == 25) alphabet = 'z';
		
			if(p == 0 ) Alphabet = 'A';
			if(p == 1 ) Alphabet = 'B';
			if(p == 2 ) Alphabet = 'C';
			if(p == 3 ) Alphabet = 'D';
			if(p == 4 ) Alphabet = 'E';
			if(p == 5 ) Alphabet = 'F';
			if(p == 6 ) Alphabet = 'G';
			if(p == 7 ) Alphabet = 'H';
			if(p == 8 ) Alphabet = 'I';
			if(p == 9 ) Alphabet = 'J';
			if(p == 10) Alphabet = 'K';
			if(p == 11) Alphabet = 'L';
			if(p == 12) Alphabet = 'M';
			if(p == 13) Alphabet = 'N';
			if(p == 14) Alphabet = 'O';
			if(p == 15) Alphabet = 'P';
			if(p == 16) Alphabet = 'Q';
			if(p == 17) Alphabet = 'R';
			if(p == 18) Alphabet = 'S';
			if(p == 19) Alphabet = 'T';
			if(p == 20) Alphabet = 'U';
			if(p == 21) Alphabet = 'V';
			if(p == 22) Alphabet = 'W';
			if(p == 23) Alphabet = 'X';
			if(p == 24) Alphabet = 'Y';
			if(p == 25) Alphabet = 'Z';
		
			for(int j = 0; j < Letter.size(); j++){
				if(Letter[j] == alphabet || Letter[j] == Alphabet) Count[i] += 1;
			}
		}
	}
	
	char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i = 0; i < 26; i++){
		cout << alphabet[i] << " : " << Count[i] << endl;
	}
	return 0;
}