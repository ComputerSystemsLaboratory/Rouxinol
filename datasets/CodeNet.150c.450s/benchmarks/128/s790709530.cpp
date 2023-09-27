#include <stdio.h>
#include <string.h>

int
main(void)
{
	char line[80];
	char out[80] = { 0 };

	if (fgets(line, sizeof line, stdin)) {
		size_t len = strlen(line);
		if (line[len-1] == '\n') {
			line[len-1] = 0;
			len --;
		}
		
		for (size_t i = 0; i  < len; i++) {
			out[i] = line[len - 1 - i];
		}
			
		printf("%s\n",out);
	}

	return 0;
}