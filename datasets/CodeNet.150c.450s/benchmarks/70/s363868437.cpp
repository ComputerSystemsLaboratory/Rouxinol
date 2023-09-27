#include <stdio.h>
#include <string.h>
#include <time.h>

int
main(void)
{
	char line[80];

	int m, d;
	
	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			return 0;
		}
		if (sscanf(line, "%d %d", &m, &d) != 2) {
			return 0;
		}

		if (m == 0) {
			return 0;
		}
		
		struct tm tm0;
		memset(&tm0, 0, sizeof tm0);
		
		tm0.tm_year = 2004-1900;
		tm0.tm_mon = m - 1;
		tm0.tm_mday = d;

		time_t t = mktime(&tm0);
		
		struct tm* tm1 =localtime(&t);
		
		strftime(line, sizeof line, "%A", tm1);

		printf("%s\n", line);
	}

	return 0;
}