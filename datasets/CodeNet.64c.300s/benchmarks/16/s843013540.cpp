#include <stdio.h>
#include <limits.h>

#define MAX 200000

int main() {
  int n;
  long value[MAX];
  long prof;
  long min_prof = LONG_MAX;
  long max_prof = LONG_MIN;

  scanf("%d", &n);
  if(n < 2 || n > 200000) {
    printf("Error: n is out of range");
    return -1;
  }

  for(int i = 0; i < n; i++) {
    scanf("%ld", &value[i]);
    if(value[i] < 1 || value[i] > 10e9) {
      printf("Error: value[i] is out of range");
      return -1;
    }
  }

  for(int i = 0; i < n; i++) {
    // check max
    if((max_prof < value[i] - min_prof) && i >= 1) {
      /* printf("## %ld, %ld", value[i], min_prof); */
      max_prof = value[i] - min_prof;
    }
    // check min
    if(value[i] < min_prof) {
      min_prof = value[i];
    }
    /* printf("min: %ld\n", min_prof); */
    /* printf("max: %ld\n", max_prof); */
  }
  printf("%ld\n", max_prof);
}