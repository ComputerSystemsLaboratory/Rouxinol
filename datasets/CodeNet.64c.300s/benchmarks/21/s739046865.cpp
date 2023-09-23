#include <bits/stdc++.h>
using namespace std;

long long a,b,c,d,e,f,kpk,tmp1,tmp2,kali1,kali2,x,y;
double ans1,ans2;


int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	while(cin>>a>>b>>c>>d>>e>>f){
		tmp1=b; tmp2=c;
		if(a==0 || d==0){
			kpk=1;
		}else
			kpk=a*d/__gcd(a,d);
		if(a==0){
			kali1=1;
		}else
			kali1=kpk/a;
		if(d==0){
			kali2=1;
		}else
			kali2=kpk/d;
		b*=kali1;
		c*=kali1;
		e*=kali2;
		f*=kali2;
		x=b-e;
		y=c-f;
		if(x==0){
			ans2==0;
		}else
			ans2=y*1.0/x;
		if(a==0){
			ans1==0;
		}else
			ans1=(tmp2-(tmp1*ans2))*1.0/a;
		cout<<fixed<<showpoint<<setprecision(3);
		cout<<ans1<<' '<<ans2<<'\n';
	}
	
	
return 0;
}