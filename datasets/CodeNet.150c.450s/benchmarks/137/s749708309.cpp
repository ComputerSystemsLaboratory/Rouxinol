#include<cstring>
#include<cstdio>
using namespace std;

//
// ???????????\???????????????????????????????????????????????????????????????????????\??????????????????????????????
//

#define m 1046527
#define l 14

char H[m][l];

int h1(long long key) { return key % m; }

int h2(long long key) { return 1 + (key % m-1); }

int Hash(long long key, int i) {
  // double hash function using the above
  return (h1(key) + i*h2(key)) % m;
}

long long power(int x, int y) {
  if (y == 0) return 1;
  else return x * power(x, y-1);
}


long long strtoi(char x[]) {
  long long sum = 0;
  for (unsigned int i = 0; i < strlen(x); i++) {
    if (x[i] == 'A') sum += 1*power(10, i);
    else if (x[i] == 'C') sum += 2*power(10, i);
    else if(x[i] == 'G') sum += 3*power(10, i);
    else if (x[i]  == 'T') sum += 4*power(10, i);
  }
  return sum;
}


int insert(char str[]) {
  // insert data into the hash table
  long long i = 0;
  long long key = strtoi(str);
  while (true) {
      long long j = Hash(key, i);
      if (strcmp(H[j], str) == 0) return 1;
      else if (strlen(H[j]) == 0) {
	strcpy(H[j], str);
	return 0;
      }
      else i++;
    }
}

int search(char str[]) {
  // search data in the hash table
  long long i = 0;
  long long key = strtoi(str);
  while (true) {
      long long j = Hash(key, i);
      if (strcmp(H[j], str) == 0) return j;
      else if (strlen(H[j]) == 0) return 0;
      else i++;
    }
  return 0;
}



int main() {

  long long n;
  scanf("%lld", &n);

  char com[9];
  char str[l];

  for (int i = 0; i < m; i++) {
    H[i][0] = '\0';
  }

  for (long long i = 0; i < n; i++) {
    scanf("%s%s", com, str);
    
    if (com[0] == 'i') insert(str);
    else if (com[0] == 'f') {
      if (search(str)) printf("yes\n");
      else printf("no\n");
    }
  }
}