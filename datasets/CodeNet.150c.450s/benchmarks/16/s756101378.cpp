#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_LEN 20000

typedef struct FOUNTAIN_DATA{
	int area;						/* fountain area */
	int plane;						/* fountain plane */
	struct FOUNTAIN_DATA *next;		/* next pushed fountain point */
} ST_FOUNTAIN;


static int CalcurateResult(ST_FOUNTAIN **ptNewData, ST_FOUNTAIN **ptOldData);			/* calcurate all fountain data */
static void OutputResult(ST_FOUNTAIN **ptOldData, int count);						/* output result each fountain data */
static void        push(ST_FOUNTAIN **pptPushedBuffer, ST_FOUNTAIN *ptPushData);	/* push data fountain data each depth  point */
static ST_FOUNTAIN *pop(ST_FOUNTAIN **ptPopData);									/* pop data merge point fountain data each depth  and output result*/


int main(void)
{
	char ch;					/* get data */
	int area;					/* fountain area */
	int plane;					/* fountain plane */
	int count;					/* fountain num */
	int loop;
	ST_FOUNTAIN *ptNewData; 	/* set new fountain data each depth */
	ST_FOUNTAIN *ptOldData;		/* result fountain data after merge */
	ST_FOUNTAIN *ptTempData;	/* for calcurate fountain data */
	
	/* initilize data */
	ptNewData = NULL;
	ptOldData = NULL;
	loop = 0;
	while(((ch = getchar()) != '\n') && (loop <= MAX_STRING_LEN))
	{
		if(ch == '\\')			/* fountain down point */
		{
			/* set new fountain point */
			ptTempData = (ST_FOUNTAIN*)malloc(sizeof(ST_FOUNTAIN));
			ptTempData->area = 0;
			ptTempData->plane = 0;
			push(&ptNewData, ptTempData);
		}
		else if(ch == '_')		/* fountain plane point */
		{
			ptTempData = pop(&ptNewData);	/* get plane length */
			if (ptTempData != NULL)
			{
				ptTempData->plane++;			/* be longer foutune plane */
				push(&ptNewData, ptTempData);	/* set fountain data */
			}
			else
			{
				/* error process */
			}
		}
		else if(ch == '/')		/* fountain up point */
		{
			area = 0;
			plane = 0;
			while((ptTempData = pop(&ptNewData)) != NULL)
			{
				/* merge foutain data with more depth point */
				area += ptTempData->area;	
				plane += ptTempData->plane;
				if(ptTempData->area == 0)	/* if merge point */
				{
					break;
				}
				else						/* more depth point */
				{
					push(&ptOldData,ptTempData);
				}
			}
 
			if(ptTempData != NULL)						/* calcrate or merge foutain data with more depth point */
			{
				/* calcrate fountain data */
				ptTempData->area = area + plane + 1;
				ptTempData->plane = plane + 2;
				push(&ptNewData, ptTempData);					/* set fountain data after merge */
				while((ptTempData = pop(&ptOldData)) != NULL)	/*  after merge, free more depth point data  */
				{
					free(ptTempData);
				}
			}
			else if (area > 0)
			{
				while((ptTempData = pop(&ptOldData)) != NULL)
				{
					push(&ptNewData, ptTempData);			/* Re-store pop data */
				}
			}
			else
			{
				/* error process */
			}
		}
		else
		{
			/* error input */
		}
		
		loop++;
	}
	
	/* calcurate all fountain data */
	count = CalcurateResult(&ptNewData, &ptOldData);
	
	/* output result each fountain data */
	OutputResult(&ptOldData, count);
	
	return 0;
}

/* calcurate all fountain data */
static int CalcurateResult(ST_FOUNTAIN **ptNewData, ST_FOUNTAIN **ptOldData)
{
	int total;					/* all fountain area sum */
	int count;					/* fountain num */
	ST_FOUNTAIN *ptTempData;	/* for calcurate fountain data */

	/* calcrate all area sum value and area num */
	total = 0;
	count = 0;
	while((ptTempData = pop(ptNewData)) != NULL)
	{
		if(ptTempData->area == 0)
		{
			free(ptTempData);
		}
		else
		{
			total += ptTempData->area;
			count++;
			push(ptOldData, ptTempData);
		}
	}
	
	printf("%d\n", total);
	printf("%d", count);
	
	return count;
}

/* output result each fountain data */
static void OutputResult(ST_FOUNTAIN **ptOldData, int count)
{
	ST_FOUNTAIN *ptTempData;	/* for calcurate fountain data */
	int loop;
	
	/* Output Result */
	for(loop = 0; loop < count; loop++)
	{
		printf(" ");
		ptTempData = pop(ptOldData);
		printf("%d", ptTempData->area);
		free(ptTempData);
	}
	
	printf("\n");
}


/* push data for set fountain data each depth  point */
void push(ST_FOUNTAIN **pptPushedBuffer, ST_FOUNTAIN *ptPushData)
{
	/* set next more depth point */
	ptPushData->next = (*pptPushedBuffer);
	(*pptPushedBuffer) = ptPushData;
}
 
/* pop data for merge point fountain data each depth  and output result*/
ST_FOUNTAIN *pop(ST_FOUNTAIN **ptPopData)
{
	ST_FOUNTAIN *ptTempData = (*ptPopData);
	if(ptTempData != NULL)
	{
		(*ptPopData) = (*ptPopData)->next;
	}
	else
	{
		/* None Pushed Data */
	}
	
	return ptTempData;
}


