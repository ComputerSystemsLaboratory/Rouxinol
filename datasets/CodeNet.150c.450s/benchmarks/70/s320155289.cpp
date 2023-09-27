#include <cstdio>
#include <iostream>

using namespace std;

int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int m,d;
	int day=0;
	while(1){
		scanf("%d %d",&m,&d);
		if(m==0&&d==0)break;
		day=0;
		for(int i=0;i<m-1;i++){
			day+=month[i];
		}
		day+=d;
		string result;
		const int r=day%7;
		switch(r){
			case 0:
			result="Wednesday";
			break;
		case 1:
			result="Thursday";
			break;
		case 2:
			result="Friday";
			break;
		case 3:
			result="Saturday";
			break;
		case 4:
			result="Sunday";
			break;
		case 5:
			result="Monday";
			break;
		case 6:
			result="Tuesday";
			break;
		}
		cout<<result<<"\n";
	}
	return 0;
}