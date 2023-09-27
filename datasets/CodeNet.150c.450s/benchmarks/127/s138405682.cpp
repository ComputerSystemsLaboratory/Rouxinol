#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	int m,i;
	string u,v,w,x,y;
	set<string>s;
	cin>>m;
	while(m--)
	{
		s.clear();
		cin>>u;
		for(i=1;i<u.size();++i)
		{
			v.assign(u.begin(),u.begin()+i);
			w.assign(u.begin()+i,u.end());
			x=v,reverse(x.begin(),x.end());
			y=w,reverse(y.begin(),y.end());
			s.insert(v+w);
			s.insert(w+v);
			s.insert(x+w);
			s.insert(w+x);
			s.insert(v+y);
			s.insert(y+v);
			s.insert(x+y);
			s.insert(y+x);
		}
		cout<<s.size()<<endl;
	}
	return 0;
}