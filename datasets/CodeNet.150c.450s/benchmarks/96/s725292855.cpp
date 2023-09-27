#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>

using namespace std;

#define MAX 2048
string button[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main(void) {
	int n, num = 0, count = 0;
	char nums[MAX];
	scanf("%d", &n);
	while(n--) {
		scanf("%s", nums);
		for(int i = 0; nums[i] != '\0'; i++) {
			if(nums[i] == '0') {
				if(num >= 1 && num <= 9) {
					printf("%c", button[num][(count + button[num].size() - 1) % button[num].size()]);
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