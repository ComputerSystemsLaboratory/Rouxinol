#include<iostream>
#include<string>
#include<set>
using namespace std;
string rev(string in)
{
	int l=0,r=in.size()-1;
	string out=in;
	while(l<r) 
	{
		out[l]=in[r];
		out[r]=in[l];
		l++; r--;
	}
	return out;
}

int main()
{
	int m; cin>>m;
	while(m--) 
	{
		string in; cin>>in;
		set<string> ans;
		for(int i = 1; i < in.size(); ++i)
		{
			string left=in.substr(0,i);
			string right=in.substr(i);

			ans.insert(left+right);
			ans.insert(right+left);
			ans.insert(rev(left)+right);
			ans.insert(right+rev(left));
			ans.insert(left+rev(right));
			ans.insert(rev(right)+left);
			ans.insert(rev(left)+rev(right));
			ans.insert(rev(right)+rev(left));
		}
		cout<<ans.size()<<endl;
	}
  return 0;
}