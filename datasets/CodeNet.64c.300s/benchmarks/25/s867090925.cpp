// 0025 Hit and Blow
#include<iostream>
using namespace std;

int main()
{
	int a[4];
	int b[4]; 
	
	while(cin >> a[0] >> a[1] >> a[2] >> a[3]){ 
	  int hit  =0;
	  int blow =0;

	for(int i=0; i<4; i++)
		cin >> b[i];

	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++)
			if(a[i]==b[j])
				if(i==j)	
					hit++;
				else
					blow++;
	cout<< hit << " " << blow << endl; 
	}
	return 0;
}