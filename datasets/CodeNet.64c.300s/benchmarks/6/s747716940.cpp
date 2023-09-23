#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,b,f,r,v,a[5][4][11];
	
	cin >> n ;
	
	for(int h=0;h<4;h++)
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<10;j++)
			{
				a[h][i][j]=0;
			}
		}
	}
	
	for(int g=0;g<n;++g){
		cin >> b >> f >> r >> v ;
		for(int h=0;h<4;++h){
			for(int i=0;i<3;++i){
				for(int j=0;j<10;++j){
					if(h==b-1 && i==f-1 && j==r-1){
						a[h][i][j]+=v;
					}
				}
			}
		}
	}
	
	for(int h=0;h<4;++h){
		for(int i=0;i<3;++i){
			for(int j=0;j<10;++j){
				cout << " " << a[h][i][j];
			}
			cout << "\n";
			
		}
		if(h <3){
				cout << "####################" << "\n";
			}

	}
	return 0;
}