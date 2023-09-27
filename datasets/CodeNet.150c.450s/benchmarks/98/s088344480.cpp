    #include<bits/stdc++.h>
    using namespace std;
    #define all(vec) vec.begin(),vec.end()
    typedef long long int ll;
    typedef pair<int,int> P;
    typedef pair<P,P> PP;
    const ll MOD=10000;
    const ll INF=1000000010;
    const int MAX=100001;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    
    int main(){
		int n,m;
		while(cin>>n>>m,n+m){
			int s1[110],s2[110];
			int sum1=0;int sum2=0;
			for(int i=0;i<n;i++){
				cin>>s1[i];
				sum1+=s1[i];
			}
			for(int i=0;i<m;i++){
				cin>>s2[i];
				sum2+=s2[i];
			}
			int ans1=INF;int ans2=INF;
			bool f=false;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(sum1+s2[j]-s1[i]==sum2+s1[i]-s2[j]){
						ans1=s1[i];
						ans2=s2[j];
						f=true;
						break;
					}
				}
				if(f){
					break;
				}
			}
			if(ans1==INF){
				cout<<-1<<endl;
			}else{
				cout<<ans1<<" "<<ans2<<endl;
			}
		}
		
    	return 0;
    }

