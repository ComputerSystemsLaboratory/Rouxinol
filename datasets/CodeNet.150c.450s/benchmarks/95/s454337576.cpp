#include <cstdio>

typedef struct
{
	char szUd[3];
} UL;

#define	N	100

int main()
{
	UL	ul[N];

	while(1)
	{
		int l = 0;
		int r = 0;
		int lPrev = 0;
		int rPrev = 0;
		int stepped = 0;

		int count;

		::scanf("%i", &count);

		if(count == 0)	{	break;	}

		// Input info
		for(int i = 0; i < count; i ++)
		{
			::scanf("%s", ul[i].szUd);
		}

		for(int i = 0; i < count; i ++)
		{
			//printf(">%c\n", ul[i].szUd[1]);
			switch(ul[i].szUd[0])
			{
			case 'l':
				if(ul[i].szUd[1] == 'u')
				{	l ++;	}
				if(ul[i].szUd[1] == 'd')
				{	l --;	}
				break;
			
			case 'r':
				if(ul[i].szUd[1] == 'u')
				{	r ++;	}
				if(ul[i].szUd[1] == 'd')
				{	r --;	}
				break;
			}
			if(r != rPrev && l != lPrev && r == l)
			{
				stepped ++;
				rPrev = r, lPrev = l;
			}
		}
		
		::printf("%i\n", stepped);
	}
}