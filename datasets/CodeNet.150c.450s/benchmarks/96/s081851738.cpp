#include <iostream>

using namespace std;

int main( void )
{
	const char *key[] = { ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	const int size[] = { 5, 3, 3, 3, 3, 3, 4, 3, 4 };
	int n;
	cin >> n;
	while(n--) {
		char buff[1025];
		scanf("%s", buff);
		char msg[77]; msg[0] = 0;
		int index = -1, no, pnt = 0;
		for(int i=0; buff[i]; ++i) {
			if('0' == buff[i]) {
				if(index != -1) {
					msg[pnt++] = key[no][index];
					msg[pnt] = 0;
				}
				index = -1;
			}
			else { // 1~9
				no = buff[i]-'1';
				index = (index+1) % size[no];
			}
		}
		cout << msg << endl;
	}
	return 0;
}