 #include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	int ans,n,h;
	string m1,m2;
	int a[4]={1000,100,10,1};
	char c[4]={'m','c','x','i'};
	vector<char>m;
	cin>>n;
	while(n--){
		ans=0;
		h=1;
		int f,g;
		cin>>m1>>m2;
		m.clear();
		f=m1.size();
		for(int i=0;i<f;i++){
			for(int j=0;j<4;j++){
				if(m1[i]==c[j]){
					ans+=a[j]*h;
					h=1;
					break;
				}
			}
			if(m1[i]>='0'&&m1[i]<='9')h=m1[i]-'0';
		}
		g=m2.size();
		h=1;
		for(int i=0;i<g;i++){
			for(int j=0;j<4;j++){
				if(m2[i]==c[j]){
					ans+=a[j]*h;
					h=1;
					break;
				}	
			}
			if(m2[i]>='0'&&m2[i]<='9')h=m2[i]-'0';
		}
		while(ans){
			int i=0;
			for(i=0;i<4;i++){
				if(ans/a[i]>=1){
					if(ans/a[i]==1){
						m.push_back(c[i]);
						break;
					}
					else{
						m.push_back(ans/a[i]+'0');
						m.push_back(c[i]);
						break;
					}
				}
			}
			ans-=ans/a[i]*a[i];
		}
		vector<char> ::iterator it=m.begin();
		while(it != m.end()){
			cout<<*it;
			++it;
		}
		cout<<endl;
	}

	return 0;
}