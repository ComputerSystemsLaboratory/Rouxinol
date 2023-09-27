#include<cstdio>
#include<queue>

using namespace std;

int main()
{
	int ap, bp, turnnum, acard, bcard;
	ap = bp = 0;
	queue<int>adeck, bdeck;
	while (1)
	{
		scanf("%d", &turnnum);
		if (turnnum == 0)break;

		for (int i = 0; i < turnnum; i++)
		{
			scanf("%d %d", &acard, &bcard);
			adeck.push(acard);
			bdeck.push(bcard);
		}
		while (adeck.empty() == false)
		{
			if (adeck.front()>bdeck.front())
			{
				ap += adeck.front() + bdeck.front();
				adeck.pop();
				bdeck.pop();
			}
			else if(adeck.front() < bdeck.front())
			{
				bp += adeck.front() + bdeck.front();
				adeck.pop();
				bdeck.pop();
			}
			else
			{
				ap += adeck.front();
				bp += bdeck.front();
				adeck.pop();
				bdeck.pop();
			}
		}
		printf("%d %d\n", ap, bp);
                ap=0;bp=0;
	}

}