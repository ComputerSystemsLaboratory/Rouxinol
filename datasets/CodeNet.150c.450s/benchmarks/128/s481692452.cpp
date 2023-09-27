#include <cstdio>
#include <cstring>
#include <utility>
using namespace std;

int main() {
	char str[21];
	scanf("%s",str);
	int length = strlen(str);
	for(int i=0;i<length/2;++i) {
		swap(str[i],str[(length-1)-i]);
	}
	puts(str);
	return 0;
}