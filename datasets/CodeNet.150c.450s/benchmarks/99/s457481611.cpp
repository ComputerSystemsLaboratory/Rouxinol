#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

string MCXI ="ixcm";

int main(int argc, char const *argv[])
{
	string s1,s2;
	int n;
	string ans;

	int d1,d2;

	int temp,f;

	cin>>n;

	for(int i1=0;i1<n;i1++){
		cin>>s1>>s2;

		temp=1;
		d1=0;
		for(int i2=0;i2<s1.size();i2++){
			f=MCXI.find(s1[i2]);
			if(f!=-1) {
				d1+=temp*pow(10,f);
				temp=1;
			}
			else temp=s1[i2]-48;
		}

		temp=1;
		d2=0;
		for(int i2=0;i2<s2.size();i2++){
			f=MCXI.find(s2[i2]);
			if(f!=-1) {
				d2+=temp*pow(10,f);
				temp=1;
			}
			else temp=s2[i2]-48;
		}


		d1+=d2;
		f=0;
		ans="";
		while(d1!=0){
			if(d1%10!=0){
				ans+=MCXI[f];
				if(d1%10!=1){
					ans+=(d1%10+48);
				}
			}
			d1=d1/10;
			f++;

		}
		reverse(ans.begin(), ans.end());
		cout<<ans<<endl;
	}
	return 0;
}