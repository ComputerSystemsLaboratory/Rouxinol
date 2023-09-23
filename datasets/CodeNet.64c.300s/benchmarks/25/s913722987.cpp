//0025 Hit and Blow
//4ツ古つづ個青板篠堋づ粂IT(ツ湘ェツ渉環、ツ値ツつェツ暗ェツ致ツ）ツ、Blow(ツ湘ェツ渉環づ債暗。ツつ、ツつェツ値ツづ債暗ェツ致ツ）ツづ個古つ青板づーツ板サツ津ィツつケツづヲ

#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	const int N = 4;
	int a[N], b[N];
	int i;

	while(1)
	{
		for(i = 0; i < N; i++)
			cin >> a[i];
		for(i = 0; i < N; i++)
			cin >> b[i];
		if(!cin)
			break;

		int hit = 0,
			blow = 0;
		for(i = 0; i < N; i++)
		{
			if(a[i] == b[i])
				hit++;
			else if(find(a, a+N, b[i]) != a+N)
				blow++;
		}

		cout << hit << ' ' << blow << endl;
	}
	return 0;
}