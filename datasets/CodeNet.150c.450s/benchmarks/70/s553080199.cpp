//2004 366 1/1 Thursday

#include <cstdio>

using namespace std;

void today(int mon, int day);

int main()
{
	int mon, day;
	
	while (1){
		scanf("%d %d", &mon, &day);
		
		if (mon == 0){
			break;
		}
		
		today(mon, day);
	}
	
	return (0);
}

void today(int mon, int day)
{
	int tmp = 0;
	
	for (int i = 1; i < mon; i++){
		if (i == 4 || i == 6 || i == 9 || i == 11){
			tmp += 30;
		}
		else if (i == 2){
			tmp += 29;
		}
		else {
			tmp += 31;
		}
	}
	
	switch ((tmp + day) % 7){
	  case 0:
	    puts("Wednesday");
		break;
		
	  case 1:
	    puts("Thursday");
		break;
		
	  case 2:
	    puts("Friday");
		break;
		
	  case 3:
	    puts("Saturday");
		break;
		
	  case 4:
	    puts("Sunday");
		break;
		
	  case 5:
	    puts("Monday");
		break;
		
	  case 6:
	    puts("Tuesday");
		break;
	}
}