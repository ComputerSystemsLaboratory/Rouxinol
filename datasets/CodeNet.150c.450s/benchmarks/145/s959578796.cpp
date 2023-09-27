#include<cstdio>
#include<cstring>

using namespace std;

char moji[10000][1000] = {{0}}; int mojis = 0;

int main(void)
{
	
	int i = 0;

	int m_cnt[1000] = {0},m_cnts = 0;
	int m_cntss = 0;

	char a[10000] = {0};
	scanf("%[^\n]",a);
	int as = strlen(a);

	int m_long = 0,m_longs;
	kitune:;//kariの初期化
	char kari[10000] = {0}; int karis = 0;
	while(i < as)
	{
		if(a[i] == ' ' || i == as - 1)
		{
			if(i == as -1) kari[karis] = a[i];
			int k_flag = 0;
			for(int j = 0;j < mojis;j++)
			{
				if(strcmp(&moji[j][0],kari) == 0) 
				{
					m_cnt[j]++;
					k_flag = 1;
					break;
				}
			}

			if(k_flag == 0)
			{
				strcpy(moji[mojis],kari);
				if(m_long < strlen(moji[mojis]))
				{
					m_long = strlen(moji[mojis]);
					m_longs = mojis;
				}
				mojis++;
			}
			i++;
			goto kitune;
		}
		else
		{
			kari[karis] = a[i];
			karis++;
			i++;
		}
	}

	for(int k = 0;k < mojis;k++)
	{
		if(m_cnts < m_cnt[k])
		{
			m_cnts = m_cnt[k];
			m_cntss = k;
		}
	}

	printf("%s %s\n",&moji[m_cntss][0],&moji[m_longs][0]);
	return 0;
}