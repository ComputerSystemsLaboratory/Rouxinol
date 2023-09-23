#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int x,y,s,sum,max;

	while(cin >> x >> y >> s){
		if((x==0)&&(y==0)&&(s==0)){return 0;}

		max = 0;

		for(int i=1; i<s-1; i++){
			for(int j=s-1; j > 0 ; j--){

				sum =  (int)( (i*(100+x)) / 100) + (int)( (j*(100+x)) / 100);

				if(sum == s){
					sum =  (int)( (i*(100+y)) / 100) + (int)( (j*(100+y)) / 100);
					if(sum > max){ max = sum;}
				}
				if(sum < s){ break;}
				}
		}
		cout << max << endl;
	}
}