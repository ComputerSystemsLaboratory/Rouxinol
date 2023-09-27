#include <cstdio>
#include <vector>

using namespace std;

struct CODE
{
	char before;
	char after;
};

int main(void)
{
	int n;
	
	while (scanf("%d", &n) * n != 0){
		vector<CODE> code;
		
		while (n-- > 0){
			CODE c;
			scanf(" %c %c", &c.before, &c.after);
			code.push_back(c);
		}
		
		int m;
		scanf("%d", &m);
		while (m-- > 0){
			char c;
			
			scanf(" %c", &c);
			for (int i = 0; i < code.size(); i++){
				if (c == code[i].before){
					c = code[i].after;
					break;
				}
			}
			putchar(c);
		}
		puts("");
	}
	
	return 0;
}