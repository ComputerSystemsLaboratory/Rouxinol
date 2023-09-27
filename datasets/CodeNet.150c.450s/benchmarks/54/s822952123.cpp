#include<cstdio>

int main(){
	char word[12];
	char eot[12] = "END_OF_TEXT";
	int i = 1;
	int count = 0;
	char c;
	bool b;

	word[0] = ' ';

	scanf("%c", &c);
	while(c - 10){
		if(96 < c && c < 123){
			word[i] = c - 32;
		}else{
			word[i] = c;
		}
		i++;
		scanf("%c", &c);
	}
	word[i] = ' ';
	i++;

	int j = 0, k = 0;

	c = ' ';
	char t = 'a';

	while(true){
		if(96 < c && c < 123){
			c -= 32;
			b = false;
		}else{
			if(c == '\n'){
				c = ' ';
			}
			b = true;
		}

		if(!(t == c && t == ' ')){
			if(word[j] == c){
				j++;
				if(j == i){
					count++;
					j = 1;
				}
			}else{
				j = 0;
			}

			if(eot[k] == c && b){
				k++;
				if(k == 11 ){
					printf("%d\n", count);
					return 0;
				}
			}else{
				k = 0;
			}
		}
		t = c;
		scanf("%c", &c);
	}
	return 0;
}