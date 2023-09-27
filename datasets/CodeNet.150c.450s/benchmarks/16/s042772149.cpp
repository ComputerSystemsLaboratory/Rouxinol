#include<iostream>
#include<algorithm>
#include<stack>
#include<cstdio>


using namespace std;

int main()
{
	char s;
	int N;
	stack<int> S1;
	stack<pair<int ,int> >S2;
	int sum = 0;
	int ans[20000];
	for (int i = 0; cin >> s; i++)
	{
		if (s =='\\')
		{
			S1.push(i);
		}                                                                                                                                                                                                                                                                                
		else if (s == '/'&&S1.size()>0)
		{
			int j = S1.top();
			S1.pop();
			int a = i-j;
			sum += a;
			while (S2.size() > 0&&j<S2.top().first)
			{
				a += S2.top().second;
				S2.pop();
			}
			S2.push(make_pair(i, a));	
		//	cout << S2.top().first <<"    " << S2.top().second << "    " <<sum<< endl;
		}
		else if (s == '\n')
		{
			break;
		}
	}
	
	N = S2.size();
	
	for (int i = 0; i < N; i++)
	{
		ans[i] = S2.top().second;
		S2.pop();
	}

	cout<<sum<<endl;
	cout << N;
	for (int i = N - 1; i >= 0; i--)
	{
		cout << ' ' << ans[i];
	}
	cout << endl;
	
	return 0;
}
