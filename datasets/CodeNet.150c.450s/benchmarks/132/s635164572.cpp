#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,p;
	while(cin>>n>>p){
		if(n==0 && p==0) return 0;
		vector<int> have(n,0);
		int now=0;
		while(true){
			if(p>0){
				have[now]++;
				p--;
				if(p==0){
					bool ok=true;
					for(int i=0;i<n;i++){
						if(i==now) continue;
						if(have[i]>0){
							ok=false;
							break;
						}
					}
					if(ok){
						cout<<now<<endl;
						break;
					}
				}
			}
			else{
				p+=have[now];
				have[now]=0;
			}
			now++;
			if(now==n) now=0;
		}

	}
	return 0;
}