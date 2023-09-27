#include <cstdio>

const char *TABLE[] = {
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};

int main(){
	int N;
	scanf("%d", &N);
	while(N--){
		char input[1025];
		scanf("%s", input);
		int key = -1, idx = -1;
		for(char *p = input; *p != '\0'; p++){
			int k = *p - '0' - 1;
			if(k < 0){
				if(idx >= 0 && key >= 0){
					putc(TABLE[key][idx], stdout);
					idx = -1;
				}
			}else{
				if(k != key){ idx = -1; }
				if(TABLE[k][++idx] == '\0'){ idx = 0; }
			}
			key = k;
		}
		puts("");
	}
	return 0;
}