#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int R,C;
	int field[10000];
	
	while(cin>>R>>C,R|C){
		memset(field,0,sizeof(field));
		for(int i=0; i<R; i++){
			for(int j=0; j<C; j++){
				int a; cin>>a;
				field[j] = (field[j]<<1) | a;
			}
		}
		
		int ans = 0;
		
		for(int k=1; k<(1<<R); k++){
			int sum = 0;
			for(int i=0; i<C; i++){
				int t1 = field[i];
				int t2 = ~field[i];
				int sum1 = 0;
				int sum2 = 0;
				for(int j=1; j<(1<<R); j<<=1){
					if( k&j ){
						sum1 += ( ((~t1)&j)==j ? 1 : 0 );
						sum2 += ( ((~t2)&j)==j ? 1 : 0 );
					}else{
						sum1 += ( (t1&j)==j ? 1 : 0 );
						sum2 += ( (t2&j)==j ? 1 : 0 );
					}
				}
				sum += max(sum1,sum2);
			}
			ans = max(ans,sum);
		}
		
		printf("%d\n",ans);
	}
	return 0;
}