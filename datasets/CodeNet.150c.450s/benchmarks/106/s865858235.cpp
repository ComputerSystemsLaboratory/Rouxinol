#include<iostream>
#include<string>
#include<vector>
#include<math.h>


#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	CI a >> b >> c;

	for (int i = 0; i < 10000;++i) {
		if (c % (a + i) == 0) {
			++result;
		}

		if (a + i == b) {
			break;
		}
	}

	CO result E

}