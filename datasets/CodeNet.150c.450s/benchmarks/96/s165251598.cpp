#include <cstdio>
using namespace std;

typedef struct {
	int N;
	char C[6];
} INPUT;

INPUT input[10] = {
	{0, ""},
	{5, ".,!? "},
	{3, "abc"},
	{3, "def"},
	{3, "ghi"},
	{3, "jkl"},
	{3, "mno"},
	{4, "pqrs"},
	{3, "tuv"},
	{4, "wxyz"}
};

int main()
{
	int N;
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		char str[2048];
		scanf("%s", str);
		
		int j = 0;
		char now = 0;
		int num = 0;
		while (str[j] != '\0'){
			if (str[j] == '0'){
				if (now != 0){
					printf("%c", input[now - '0'].C[num % input[now - '0'].N ] );
				}
				now = 0;
				num = 0;
			}
			else {
				if (now == 0){
					now = str[j];
				}
				else {
					num++;
				}
			}
			j++;
		}
		
		puts("");
	}
	
	return 0;
}