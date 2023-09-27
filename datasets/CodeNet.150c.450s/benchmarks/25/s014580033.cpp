#include <iostream>
#include <stdio.h>
using namespace std;

	int main(void) {
		int count[26] = { 0 };
                char c;
 
		while (cin >> c) {
                        
			if (c >= 65 && c <= 90)
				count[c - 'A']++;
			else if (c >= 97 && c <= 122)
                                count[c - 'a']++;

                      
		}

		for (int i = 0; i < 26; i++)
			printf("%c : %d\n", ('a' + i), count[i]);
		return 0;
	}