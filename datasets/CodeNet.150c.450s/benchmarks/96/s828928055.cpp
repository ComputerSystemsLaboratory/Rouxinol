#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char judge(char C, int c){

	  if(C == '1'){
	     if(c % 5 == 1){
	       return '.';
	   } else if(c % 5 == 2){
	     return ',';
	     } else if(c % 5 == 3){
	       return '!';
	   } else if(c % 5 == 4){
	     return '?';
	      } else if(c % 5 == 0){
	       return ' ';
	    }
	 } else if(C == '2'){
	   if(c % 3 == 1){
	    return 'a';
	     } else if(c % 3 == 2){
		   return 'b';
		    } else if(c % 3 == 0){
		    return 'c';
	   }
	  } else if(C == '3'){
      if(c % 3 == 1){
       return 'd';
    } else if(c % 3 == 2){
      return 'e';
      } else if(c % 3 == 0){
       return 'f';
    }
    } else if(C == '4'){
    if(c % 3 == 1){
     return 'g';
     } else if(c % 3 == 2){
       return 'h';
    } else if(c % 3 == 0){
     return 'i';
      }
  } else if(C == '5'){
      if(c % 3 == 1){
      return 'j';
   } else if(c % 3 == 2){
      return 'k';
      } else if(c % 3 == 0){
      return 'l';
    }
    } else if(C == '6'){
    if(c % 3 == 1){
      return 'm';
     } else if(c % 3 == 2){
        return 'n';
    } else if(c % 3 == 0){
      return 'o';
      }
	  } else if(C == '7'){
      if(c % 4 == 1){
        return 'p';
    } else if(c % 4 == 2){
		return 'q';
      } else if(c % 4 == 3){
       return 'r';
    } else if(c % 4 == 0){
      return 's';
      }
    } else if(C == '8'){
	 if(c % 3 == 1){
	     return 't';
	     } else if(c % 3 == 2){
	      return 'u';
	    } else if(c % 3 == 0){
	      return 'v';
	      }
	  } else if(C == '9'){
	    if(c % 4 == 1){
	        return 'w';
	    } else if(c % 4 == 2){
	      return 'x';
	      } else if(c % 4 == 3){
	       return 'y';
	    } else if(c % 4 == 0){
	      return 'z';
				      }
	  }

}


int main(void) {
	int n, c, count = 0, i = 0;
	char st[2], str[77], nowc;

	cin.tie(0);

	cin >> n;
	fgets(st, 2, stdin);

	for (int k = 0; k < n; k++) {
		while ((c = getchar()) != '\n') {

			if (count == 0 && c == '0') {
				continue;
			} else if (count == 0 && c != '0') {
				nowc = (char)c;
				count++;
			} else if (count != 0 && c == '0') {
				str[i++] = judge(nowc, count);
				count = 0;
			} else if (count != 0 && c != 0) {
				count++;
			}
		}
		str[i] = '\0';
		if (i != 0) cout << str << "\n";
		strcpy(str, "");
		count = 0;
		i = 0;
	}

	return 0;
}