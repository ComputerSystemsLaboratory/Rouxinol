#include <bitset>
#include <cstdio>
using namespace std;
bitset<10000> b[10];
int n=0,m=0,res=0;

void Fan(int i)
{
	if (i==n)//此&#26102;，已没有b[i]了。
	{
		int r=0;
		for (int ii=0;ii<m;++ii)
		{
			int up=0;
			for (int io=0;io<n;++io)
			{
				if (b[io][ii])  //b[10][10000]
				{
					++up;
				}
			}
			r+=((up>n-up)?up:(n-up));
		}
		if (r>res)
		{
			res=r;
		}
		return ;
	}
	Fan(i+1);
	b[i].flip();
	Fan(i+1);
	b[i].flip();
}

void debug()
{
	freopen("AOJ-0525-in.txt","r",stdin);
	freopen("AOJ-0525-out.txt","w",stdout);
}

int main()
{
//	debug();
	while (scanf("%d%d",&n,&m),n)
	{
		for (int ri=0;ri<n;++ri)
		{
			for (int ci=0;ci<m;++ci)
			{
				int tmp;
				scanf("%d",&tmp);
				b[ri][ci]=(bool)(tmp);
			}
		}
		Fan(0);
		printf("%d\n",res);
		res=0;
		n=0;
	}
	return 0;
}