#include<bits/stdc++.h>
using namespace std;
bool result(int x, int y, int z, int e){
	return ((x*x+z*z+y*y+x*y+y*z+z*x) <= e);
}
int main()
{
	int n, x, y, z, c = 0;
	cin>>n;
	for(int e = 1; e <= n; e++){
		c = 0;
		for( x = 1; x < int(sqrt(e));x++){
			for( y = 1; y < int(sqrt(e)); y++){
				for( z = 1; z < int(sqrt(e)); z++){
					 if((x*x+z*z+y*y+x*y+y*z+z*x) == e)
						 ++c;
					 else if((x*x+z*z+y*y+x*y+y*z+z*x) > e){
						 break;
					 }
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}