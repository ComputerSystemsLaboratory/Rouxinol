#include <stdio.h>

static int days[] = {
  0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30
};

static char* week[] = {
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday",
  "Sunday"
};

int main(void)
{
  int i;
  for (i=0; i<11; ++i) {
    days[i+1] += days[i];
  }

  int month, day;
  while (scanf("%d %d", &month, &day) != EOF) {
    if (month==0 && day==0) {
      break;
    }

    day += days[month-1];
    day += 2;
    day %= 7;

    printf("%s\n", week[day]);
  }
  return 0;
}