#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	while(1){
		int x,y,z,ans=0;
		cin >> x >> y >> z;
		if(!x&&!y&&!z)	break;
		for(int i=1;i<z;i++){
			for(int j=1;j<z;j++){
				if(int(i*(100+x)/100)+int(j*(100+x)/100)==z)
					ans = max(ans,int(i*(100+y)/100)+int(j*(100+y)/100));
			}
		}
		cout << ans << endl;
	}
}
