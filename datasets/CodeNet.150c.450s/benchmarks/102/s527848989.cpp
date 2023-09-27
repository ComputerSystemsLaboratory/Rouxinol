#include <bits/stdc++.h>

using namespace std;

template<typename T>
class UF
{
public:
	UF()
	{
		count = 0;
	}

	void push(T a)
	{
		M[a] = count;
		V.push_back(count);
		rank.push_back(0);
		count++;
	}

	void unite(T a , T b)
	{
		long long int x = find(M[a]);
		long long int y = find(M[b]);
		if(x == y)return;
		if(rank[x] < rank[y])
		{
			V[x] = y;
		} else
		{
			V[y] = x;
			if(rank[x] == rank[y])rank[x]++;
		}
	}
	void merge(T a , T b)
	{
		unite(a , b);
	}
	bool same(T a , T b)
	{
		return find(M[a]) == find(M[b]);
	}
	long long int group()
	{
		set<long long int>S;
		for(long long int i = 0; i < V.size(); i++)
		{
			S.insert(find(V[i]));
		}
		return S.size();
	}

private:
	vector<long long int> V , rank;
	map < T , long long int>M;
	long long int count;

	long long int find(long long int x)
	{
		if(V[x] == x)return x;
		else return V[x] = find(V[x]);
	}
};

int main()
{
	int W , H;
	while(cin >> W >> H , W || H)
	{
		vector<vector<char>>VVC(H , vector<char>(W));
		UF<pair<int , int>>UFP;
		pair<int,int>at;
		for(size_t i = 0; i < H; i++)
		{
			for(size_t j = 0; j < W; j++)
			{
				cin >> VVC[i][j];
				UFP.push(make_pair(i , j));
				if(VVC[i][j]=='@')
				{
					at=make_pair(i,j);
				}
				if(VVC[i][j] != '#')
				{
					if(i != 0)
					{
						if(VVC[i - 1][j] != '#')
						{
							UFP.merge(make_pair(i , j) , make_pair(i - 1 , j));
						}
					}
					if(j != 0)
					{
						if(VVC[i][j - 1] != '#')
						{
							UFP.merge(make_pair(i , j) , make_pair(i , j - 1));
						}
					}
				}

			}
		}
		int ans=0;
		for(size_t i = 0; i < H; i++)
		{
			for(size_t j = 0; j < W; j++)
			{
				if(UFP.same(at,make_pair(i,j)))
				{
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}