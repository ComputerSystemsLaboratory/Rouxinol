/*ITP1_8_B
#include<iostream>
using namespace std;

int main()
{
	int x,a;
	for(;;){
		cin>>x;
		if(x==0)
			break;
		for(a=0;x!=0;x/=10){
			a+=x%10;
			}
		cout<<a<<endl;
	}
	return 0;
}
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string ch;
	int ans = 0;

	while(1){
		cin>>ch;
		if(ch == "0")break;

		for(int i=0;i<ch.size();i++){
			ans +=ch[i]-'0';
		}
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}