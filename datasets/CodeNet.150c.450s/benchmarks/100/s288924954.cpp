#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

vector<int> bignum(1,1);
const int e9=1000000000;

void fact(int n);
void multi(int num);
void output();

int main()
{
	int n;
	cin>>n;
	fact(n);
	return 0;
}

void fact(int n)
{
	for(int i=1;i<=n;i++)
	{
		 multi(i);
	}
	output();
}

void multi(int num)
{
	long long temp;
	for(int i=bignum.size()-1;i>=0;i--)
	{
		temp=(long long)(bignum[i])*num;
		bignum[i]=temp%e9;
		if(i==bignum.size()-1&&temp/e9>0)
		{
			bignum.push_back(temp/e9);
			continue;
		}
		bignum[i+1]+=temp/e9;
	}
}

void output()
{
	for(int i=bignum.size()-1;i>=0;i--)
	if(i==bignum.size()-1)
	{
		cout<<bignum[i];
	}
	else//上位を0で詰める
	{
		cout<<setfill('0')<<setw(9)<<right<<bignum[i];
	}
	cout<<endl;
}