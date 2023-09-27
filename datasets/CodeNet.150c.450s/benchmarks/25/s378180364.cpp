#include <iostream>
#include<string>

using namespace std;

int main(){

	string data;
	int count[26];


	for (int i = 0; i < 26; i++){
		count[i] = 0;

	}

	while (getline(cin, data)){
		

		for (int i = 0; data[i]; i++){
			if (isupper(data[i])){
				data[i] = tolower(data[i]);
			}
	
			switch (data[i]){
			case 'a':
				count[0]++; break;
			case 'b':
				count[1]++; break;
			case 'c':
				count[2]++; break;
			case 'd':
				count[3]++; break;
			case 'e':
				count[4]++; break;
			case 'f':
				count[5]++; break;
			case 'g':
				count[6]++; break;
			case 'h':
				count[7]++; break;
			case 'i':
				count[8]++; break;
			case 'j':
				count[9]++; break;
			case 'k':
				count[10]++; break;
			case 'l':
				count[11]++; break;
			case 'm':
				count[12]++; break;
			case 'n':
				count[13]++; break;
			case 'o':
				count[14]++; break;
			case 'p':
				count[15]++; break;
			case 'q':
				count[16]++; break;
			case 'r':
				count[17]++; break;
			case 's':
				count[18]++; break;
			case 't':
				count[19]++; break;
			case 'u':
				count[20]++; break;
			case 'v':
				count[21]++; break;
			case 'w':
				count[22]++; break;
			case 'x':
				count[23]++; break;
			case 'y':
				count[24]++; break;
			case 'z':
				count[25]++; break;
			}



		}




	}		
	for (int i = 0; i < 26; i++){

		cout << char(i + int('a')) << " : " << count[i] << endl;

	}


	return 0;
}