#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7,MAX = 1e5;

class dice
{
	int ue,mae,migi,hidari,sita,usiro;
	public:
	dice(int a,int b,int c,int d,int e,int f)
	{
		ue = a;
		mae = b;
		migi = c;
		hidari = d;
		sita = f;
		usiro = e;
	}
	void N()
	{
		swap(ue,mae);
		swap(mae,sita);
		swap(sita,usiro);
	}
	void S()
	{
		swap(ue,usiro);
		swap(usiro,sita);
		swap(sita,mae);
	}
	void E()
	{
		swap(ue,hidari);
		swap(hidari,sita);
		swap(sita,migi);
	}
	void W()
	{
		swap(ue,migi);
		swap(migi,sita);
		swap(sita,hidari);
	}
	int top()
	{
		return ue;
	}
	int right()
	{
		return migi;
	}
	int front()
	{
		return mae;
	}
	void turn_right()
	{
		swap(mae,migi);
		swap(migi,usiro);
		swap(usiro,hidari);
	}
	int serch_turn(int i)
	{
		while(1)
		{
			turn_right();
			if(i==front())
			{
				return right();
			}
		}
	}
};



int main()
{
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >>f;
	dice D(a,b,c,d,e,f);
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;
		
		//cout<<' '<<D.top()<<' '<<D.front()<<endl;
		if(D.top()==x)
		{
			cout<<D.serch_turn(y)<<endl;
			continue;
		}
		D.N();
		if(D.top()==x)
		{
			cout<<D.serch_turn(y)<<endl;
			continue;
		}
		D.N();
		if(D.top()==x)
		{
			cout<<D.serch_turn(y)<<endl;
			continue;
		}
		D.N();
		if(D.top()==x)
		{
			cout<<D.serch_turn(y)<<endl;
			continue;
		}
		D.N();
		D.E();
		if(D.top()==x)
		{
			cout<<D.serch_turn(y)<<endl;
			continue;
		}
		D.W();
		D.W();
		if(D.top()==x)
		{
			cout<<D.serch_turn(y)<<endl;
			continue;
		}
		
		
	}
	return 0;
}
