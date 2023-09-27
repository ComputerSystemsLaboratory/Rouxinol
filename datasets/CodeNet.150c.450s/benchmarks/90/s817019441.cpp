#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int cnt[101];
	fill(cnt,cnt+101,0);

	int ans=0,i;
	while(cin>>i)
	{
		cnt[i]++;
		ans=max(ans,cnt[i]);
	}

	for (int i = 0; i < 101; ++i)
	{
		if(cnt[i]==ans) cout<<i<<endl;
	}
	return 0;
}