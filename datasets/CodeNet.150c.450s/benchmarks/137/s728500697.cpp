#include<stdio.h>
#include<string.h>

#define LEN 14
#define LIM 2000000

char H[LIM][LEN];

int toInt(char c) {
  if ( c == 'A' ) return 1;
  else if ( c == 'C' ) return 2;
  else if ( c == 'G' ) return 3;
  else if ( c == 'T' ) return 4;
  else return 0;
}

int getKey(char str[]) {
  int sum = 0, p = 1;
  for ( int i = 0; i < strlen(str); i++ ) {
    int v = toInt(str[i]);
    sum += v * p;
    p *= 5;
  }
  return sum;
}

int h1(int key) { return key % LIM; }
int h2(int key) { return 1 + key % (LIM - 1); }
int hashValue(int key, int i) { return (h1(key) + i * h2(key)) % LIM; }

int insert(char str[]) {
  int key = getKey(str);
  for ( int i = 0; i < LIM; i++ ) {
    int h = hashValue(key, i);
    if ( strcmp(H[h], str) == 0 ) {
      return 1;
    } else if ( strlen(H[h]) == 0 ) {
      strcpy(H[h], str);
      return 1;
    }
  }
  return 0;
}

int find(char str[]) {
  int key = getKey(str);
  for ( int i = 0; i < LIM; i++ ) {
    int h = hashValue(key, i);
    if ( strcmp(H[h], str) == 0 ) {
      return 1;
    } else if ( strlen(H[h]) == 0 ) {
      return 0;
    }
  }
  return 0;
}

int main() {
  int n;
  char com[7], str[LEN];
  scanf("%d", &n);

  while( scanf("%s %s", com, str) != EOF ) {
    if ( com[0] == 'i' ) {
      insert(str);
    } else if (com[0] == 'f' ) {
      if (find(str)) {
        printf("yes\n");
      } else {
        printf("no\n");
      }
    }
  }

  return 0;
}

