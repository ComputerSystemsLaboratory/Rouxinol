#include <iostream>

int main(){
	long t = 0;
	int time[3] = {};

	scanf("%ld", &t);

	time[0] = static_cast<int>(t / 3600);
	t = (t % 3600);
	time[1] = static_cast<int>(t / 60);
	t = (t % 60);
	time[2] = static_cast<int>(t);

	printf("%d:%d:%d\n", time[0], time[1], time[2]);

	return 0;
}