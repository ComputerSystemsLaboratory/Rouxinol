#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>

#define MAX 2048

using namespace std;

int main(void) {
	int n, num = 0, count = 0;
	char nums[MAX];
	scanf("%d", &n);
	while(n--) {
		scanf("%s", nums);
		for(int i = 0; nums[i] != '\0'; i++) {
			if(nums[i] == '0') {
				if(num >= 2 && num <= 6) {
					printf("%c", (num - 2) * 3 + ((count + 2) % 3) + 'a');
				} else if(num == 7) {
					printf("%c", (count + 3) % 4 + 'p');
				} else if(num == 8) {
					printf("%c", (count + 2) % 3 + 't');
				} else if(num == 9) {
					printf("%c", (count + 3) % 4 + 'w');
				} else if(num == 1) {
					switch((count + 4) % 5) {
					case 0: printf("."); break;
					case 1: printf(","); break;
					case 2: printf("!"); break;
					case 3: printf("?"); break;
					case 4: printf(" "); break;
					}
				} else {
					printf("");
				}
				num = 0;
				count = 0;
			}
			else if(nums[i] == num + '0') {
				count++;
			} else {
				num = nums[i] - '0';
				count = 1;
			}
		}
		printf("\n");
	}
	return 0;
}