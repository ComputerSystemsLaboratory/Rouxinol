#include <stdio.h>
#include <string.h>

// int zero_count(char str[]) {
//   int a;
//   int cnt = 0;
//   a = strlen(str);
//   for (int i = 0; i < a; i++) {
// 	if (str[i] == '0') {
// 	  ctr++;
// 	}
//   }
//   return ctr;
// }

int main(void) {
  int n;
  // int zero_num = 0;
  int i, j, k;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
	char str[10000] = {0};
	char ans[10000] = {0};
	scanf("%s", str);
	int len;
	// char c;
	len = strlen(str);
	j = 0;
	k = 0;
	int /* zero[100] = {0},*/ one[100] = {0}, two[100] = {0}, three[100] = {0}, four[100] = {0};
	int five[100] = {0}, six[100] = {0}, seven[100] = {0}, eight[100] = {0}, nine[100] = {0};
	int cnt = 0;
	
	while(1) {
	  switch (str[j]) {
	  case '0':
		///////////////////////////////////////////////////////////////////////////////
		if (one[k] != 0) {
		  cnt = one[k] % 5;
		  switch(cnt) {
		  case 1:
			ans[k] = '.';
			break;
		  case 2:
			ans[k] = ',';
			  break;
		  case 3:
			ans[k] = '!';
			break;
		  case 4:
			ans[k] = '?';
			break;
		  case 0:
			ans[k] = ' ';
			break;
		  }
		  k++;
		}
		else if (two[k] != 0) {
		  cnt = two[k] % 3;
		  switch(cnt) {
		  case 1:
			ans[k] = 'a';
			break;
		  case 2:
			ans[k] = 'b';
			  break;
		  case 0:
			ans[k] = 'c';
			break;
		  }
		  k++;
		}
		else if (three[k] != 0) {
		  cnt = three[k] % 3;
		  switch(cnt) {
		  case 1:
			ans[k] = 'd';
			break;
		  case 2:
			ans[k] = 'e';
			  break;
		  case 0:
			ans[k] = 'f';
			break;
		  }
		  k++;
		}
		else if (four[k] != 0) {
		  cnt = four[k] % 3;
		  switch(cnt) {
		  case 1:
			ans[k] = 'g';
			break;
		  case 2:
			ans[k] = 'h';
			  break;
		  case 0:
			ans[k] = 'i';
			break;
		  }
		  k++;
		}
		else if (five[k] != 0) {
		  cnt = five[k] % 3;
		  switch(cnt) {
		  case 1:
			ans[k] = 'j';
			break;
		  case 2:
			ans[k] = 'k';
			  break;
		  case 0:
			ans[k] = 'l';
			break;
		  }
		  k++;
		}
		else if (six[k] != 0) {
		  cnt = six[k] % 3;
		  switch(cnt) {
		  case 1:
			ans[k] = 'm';
			break;
		  case 2:
			ans[k] = 'n';
			  break;
		  case 0:
			ans[k] = 'o';
			break;
		  }
		  k++;
		}
		else if (seven[k] != 0) {
		  cnt = seven[k] % 4;
		  switch(cnt) {
		  case 1:
			ans[k] = 'p';
			break;
		  case 2:
			ans[k] = 'q';
			break;
		  case 3:
			ans[k] = 'r';
			break;
		  case 0:
			ans[k] = 's';
			break;
		  }
		  k++;
		}

		else if (eight[k] != 0) {
		  cnt = eight[k] % 3;
		  switch(cnt) {
		  case 1:
			ans[k] = 't';
			break;
		  case 2:
			ans[k] = 'u';
			break;
		  case 0:
			ans[k] = 'v';
			break;
		  }
		  k++;
		}
		else if (nine[k] != 0) {
		  cnt = nine[k] % 4;
		  switch(cnt) {
		  case 1:
			ans[k] = 'w';
			break;
		  case 2:
			ans[k] = 'x';
			break;
		  case 3:
			ans[k] = 'y';
			break;
		  case 0:
			ans[k] = 'z';
			break;
		  }
		  k++;
		}
		////////////////////////////////////////////////////////////
		break;
	  case '1':
		one[k]++;
		break;
	  case '2':
		two[k]++;
		break;
	  case '3':
		three[k]++;
		break;
	  case '4':
		four[k]++;
		break;
	  case '5':
		five[k]++;
		break;
	  case '6':
		six[k]++;
		break;
	  case '7':
		seven[k]++;
		break;
	  case '8':
		eight[k]++;
		break;
	  case '9':
		nine[k]++;
		break;
	  }
	  j++;
	  if (len == j) break;
	}
   
	printf("%s\n", ans);
  }



		
   
  return 0;
}