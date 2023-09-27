#include <cstdio>
#include <cstring>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

void addPatterns(set<string> &patterns, const char *input, int pivot, int length){
	char tmp[73];
	// »ÌÜÜ
	strcpy(tmp, input);
	patterns.insert(string(tmp));
	// O¼¾¯½]
	strcpy(tmp, input);
	reverse(tmp, tmp + pivot);
	patterns.insert(string(tmp));
	// ã¼¾¯½]
	strcpy(tmp, input);
	reverse(tmp + pivot, tmp + length);
	patterns.insert(string(tmp));
	// ¼ûÆà½]
	strcpy(tmp, input);
	reverse(tmp, tmp + pivot);
	reverse(tmp + pivot, tmp + length);
	patterns.insert(string(tmp));
}

int main(){
	int m;
	scanf("%d", &m);
	while(m--){
		char input[73];
		scanf("%s", input);
		set<string> patterns;
		int length = strlen(input);
		for(int i = 1; i < length; i++){
			addPatterns(patterns, input, i, length);
			// OãüêÖ¦
			char tmp[150];
			int j = length - i;
			strcpy(tmp, input + i);
			strcpy(tmp + j, input);
			tmp[length] = '\0';
			addPatterns(patterns, tmp, j, length);
		}
		printf("%d\n", patterns.size());
	}
	return 0;
}