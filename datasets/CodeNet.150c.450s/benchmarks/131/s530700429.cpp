#include<map>
#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<functional>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	while(1){
		string a;
		int L; cin>>a>>L;
		if(L==0) break;
		while(a.length()<L) a="0"+a;

		map<string,int> f;
		f[a]=0;
		for(int t=1;;t++){
			string a1=a,a2=a;
			sort(a1.begin(),a1.end());
			sort(a2.begin(),a2.end(),greater<char>());

			int b1,b2;
			sscanf(a1.c_str(),"%d",&b1);
			sscanf(a2.c_str(),"%d",&b2);

			char tmp[8]; sprintf(tmp,"%d",b2-b1);
			a=tmp;
			while(a.length()<L) a="0"+a;
			if(f.count(a)>0){
				cout<<f[a]<<' '<<b2-b1<<' '<<t-f[a]<<endl;
				break;
			}
			f[a]=t;
		}
	}

	return 0;
}