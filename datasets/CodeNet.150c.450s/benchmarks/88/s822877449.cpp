#include "iostream"
using namespace std;
int main(void)
{
	int w,h;
	while (cin>>h>>w,h) {
		int d=h*h+w*w;
		int ah=1000,aw=1000,ad=1000000;

		for (int i = 1; i < 151; i++) {
			for (int j = i+1; j < 151; j++) {
				int dd=i*i+j*j;
				if(dd>d)
				{
					if(dd<ad)
					{
						ah=i; aw=j; ad=dd;
					}
					else if(dd==ad)
					{
						if(i<ah)
						{
							ah=i; aw=j;
						}
					}
				}
				else if(dd==d)
				{
					if(i>h&&ad!=dd)
					{
						ah=i; aw=j; ad=dd;
					}
				}
			}
		}

		cout<<ah<<" "<<aw<<endl;
	}
	return 0;
}