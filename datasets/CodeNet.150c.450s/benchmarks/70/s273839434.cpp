#include <cstdio>
#include <iostream>

using namespace std;


char str[7][10] = {"Thursday", "Friday", "Saturday","Sunday", "Monday", "Tuesday", "Wednesday"};
int days[13] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335}; 

int main() {
	int month, day;
	while (scanf("%d%d", &month, &day), month + day) {
		printf ("%s\n", str[(days[month] + day - 1) % 7]);
	}
	return 0;
}