#include <cstdio>
 using namespace std;

int main(){
    int a, hour, b, minute, second;
	scanf("%d", &a);
	hour = a / 3600;
        b = a % 3600;
	minute = b / 60;
        second = b % 60;
	printf("%d:%d:%d\n",hour, minute, second);
    return 0;
}
