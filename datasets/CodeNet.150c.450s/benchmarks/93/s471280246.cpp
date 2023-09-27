# include <iostream>
using namespace std;
struct info
{
	int val;
	char c;
	int num;
};
int partition(info *a, int p, int r)
{
	int i = p - 1;
	int x = a[r].val;
	for (int j = p; j < r; j++) if (a[j].val <= x) swap(a[++i], a[j]);
	swap(a[i+1], a[r]);
	return i+1;
}

void quick_sort(info *a,int st,int ed)
{
	if(st >= ed) return ;
	else
	{
		int index = partition(a,st,ed);
		quick_sort(a,st,index-1);
		quick_sort(a,index+1,ed);
	}
}

int main()
{
	int n,k; info *a;
	scanf("%d%c",&n,&k); a = new info [n];
	for(int i = 0;i < n;i++) scanf("%c %d%c",&a[i].c,&a[i].val,&k);
	for(int i = 0;i < n;i++) a[i].num = i;
	quick_sort(a,0,n-1);
	bool f = true;
	for(int i = 1;i < n;i++)
	{
		if(a[i].val == a[i-1].val)
		{
			if(a[i].num < a[i-1].num)
			{
				f = false;
				break;
			}
		}
	}
	printf("%s\n",f?"Stable":"Not stable");
	for(int i = 0;i < n;i++) printf("%c %d\n",a[i].c,a[i].val);
	return 0;
}
