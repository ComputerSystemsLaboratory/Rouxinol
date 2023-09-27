#include <iostream>

using namespace std;

int player[55];

int main(void){
	int n,p;
	while(cin >> n >> p){
		if(n==0&&p==0)
			break;
		for(int i=0;i<n;++i) player[i]=0;

		int cur=0;
		int ans=-1;
		int center=p;
		while(ans==-1){
			if(center){
				player[cur]++;
				center--;
			}else{
				center+=player[cur];
				player[cur]=0;
			}
			cur=(cur+1)%n;
			for(int i=0;i<n;++i)
				if(player[i]==p)
					ans=i;
		}
		cout << ans << endl;
	}
	return 0;
}