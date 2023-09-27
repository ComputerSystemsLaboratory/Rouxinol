#include<stdio.h>
#include<string.h>
using namespace std;

#define LIM 519430400
#define LEN 13

char H[LIM][LEN];


int toInt(char str) {
  if ( str == 'A' ) return 1;
  else if ( str == 'C' ) return 2;
  else if ( str == 'G' ) return 3;
  else if ( str == 'T' ) return 4;
  else return 0;
}

long long getKey(char str[]) {
  int i, m, p = 1, sum = 0;
  for ( i = 0; i < strlen(str); i++ ) {
    m = toInt(str[i]);
    sum += m * p;
    p *= 5;
  }
  return sum;
}

int h1(long long key) { return key % LIM; }
int h2(long long key) { return 1 + (key % (LIM - 1)); }
long long hashValue(long long key, int i) { return h1(key) + i * h2(key); }

int insert(char str[]) {
  long long key = getKey(str);
  for ( int i = 0; i < LIM; i++ ) {
    long long h = hashValue(key, i);
    if (strcmp(H[h], str) == 0) return 1;
    else if (strlen(H[h]) == 0) {
      strcpy(H[h], str);
      return 1;
    }
  }
  return 0;
}
int find(char str[]) {
  long long key = getKey(str);
  for ( int i = 0; i < LIM; i++ ) {
    long long h = hashValue(key, i);
    if (strcmp(H[h], str) == 0) return 1;
    else if (strlen(H[h]) == 0) return 0;
  }
  return 0;
}

int main() {
  int n;
  char com[6], str[12];
  scanf("%d", &n);

  while( scanf("%s %s", com, str) != EOF ) {
    if ( com[0] == 'i' ) {
      insert(str);
    } else {
      if (find(str)) {
        printf("yes\n");
      } else {
        printf("no\n");
      }
    }
  }

  return 0;
}

