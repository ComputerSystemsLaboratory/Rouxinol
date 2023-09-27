#include<iostream>
#include<set>

using namespace std;

int main()
{
	multiset<int ,greater<int> > num;
	int n;
	
	for(;cin >> n;)
	{
		num.clear();
		num.insert(n);
		for(int i=0;i<4;i++)
		{
			cin >> n;
			num.insert(n);
		}
		
		multiset<int,greater<int> >::iterator it = num.begin();
		
		for(;it!=num.end();)
		{
			it++;
			if(it!=num.end())
			{
				it--;
				cout << *it << " " ;
			}
			else
			{
				it--;
				cout << *it << endl;
			}
			
			it++;
		}
	}
}