#include<iostream>

using namespace std;

int main()
{
	char *week[7]={ "Thursday",
					"Friday",
					"Saturday",
					"Sunday",
					"Monday",
					"Tuesday",
					"Wednesday"};
	int mouse[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int tuki,day;

	while(cin>>tuki>>day,tuki,day){
		int now=0;
		now+=day-1;
		for(tuki=tuki-2;tuki>=0;tuki--)
			now+=mouse[tuki];
		cout<<week[now%7]<<endl;
	}

	return 0;
}