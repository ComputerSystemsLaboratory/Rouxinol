#include <bits/stdc++.h>
using namespace std;

int read_table(vector<vector<int>> &t);
int calc_score(vector<vector<int>> &t);
int print_table(vector<vector<int>> &t);

int main()
{

	int h;
	vector<vector<int>> t(10,vector<int>(5));
	
	for (;;)
	{
		h=read_table(t);
		if (h==0)
		{
			return 0;
		}

		int total_score=0;
		for (;;)
		{
			//print_table(t);
			int score=calc_score(t);
			//fprintf(stderr, "score: %d\n",score);
			if (score==0)
			{
				cout << total_score << endl;
				break;
			}
			total_score+=score;
		}
	}
}

int read_table(vector<vector<int>> &t)
{
	int h;
	cin >> h;
	if (h==0)
	{
		return 0;
	}

	int y;
	for (y=0;y<10-h;++y)
	{
		for (int j=0;j<5;++j)
		{
			t[y][j]=0;
		}
	}
	for (int i=0;i<h;++i)
	{
		y=(10-h)+i;
		for (int j=0;j<5;++j)
		{
			cin >> t[y][j];
		}
	}

	return h;
}


int calc_score(vector<vector<int>> &t)
{
	int total_score=0;
 	const int multiplier[]={
		0, 0, 0, 0, 0, 0, 0, 3,
		0, 0, 0, 0, 0, 0, 3, 4,
		0, 0, 0, 0, 0, 0, 0, 3,
		0, 0, 0, 0, 3, 3, 4, 5,
	};

 	const int mark[]={
		0, 0, 0, 0, 0, 0, 0, 7,
		0, 0, 0, 0, 0, 0, 14, 15,
		0, 0, 0, 0, 0, 0, 0, 7,
		0, 0, 0, 0, 28, 28, 30, 31,
	};


	// calc score and mark scored stones
	for (int i=10-1;i>=0;--i)
	{
		int s2=t[i][2];
		int p=4;
		if (t[i][0]==s2)
		{
			p+=1;
		}
		if (t[i][1]==s2)
		{
			p+=2;
		}
		if (t[i][3]==s2)
		{
			p+=8;
		}
		if (t[i][4]==s2)
		{
			p+=16;
		}
		//fprintf(stderr,"%d %d\n",i,p);
		total_score+=multiplier[p]*s2;

		if ((mark[p]&1)!=0)
		{
			t[i][0]=0;
		}
		if ((mark[p]&2)!=0)
		{
			t[i][1]=0;
		}
		if ((mark[p]&4)!=0)
		{
			t[i][2]=0;
		}
		if ((mark[p]&8)!=0)
		{
			t[i][3]=0;
		}
		if ((mark[p]&16)!=0)
		{
			t[i][4]=0;
		}
	}

	// shift stone down
	for (int i=0;i<5;++i)
	{
		int current=10-1;
		int lowest=current;
		while (current>=0)
		{
			while ((lowest>=0)&&(t[lowest][i]==0))
			{
				--lowest;
			}
			if (lowest<0)
			{
				// no more stone...
				for (;current>=0;--current)
				{
					t[current][i]=0;
				}
			}
			else
			{
				t[current][i]=t[lowest][i];
				--current;
				--lowest;
			}
		}
	}

	return total_score;
}


int print_table(vector<vector<int>> &t)
{
	fprintf(stderr,"table:\n");
	for (int i=0;i<10;++i)
	{
		for (int j=0;j<5;++j)
		{
			fprintf(stderr," %d",t[i][j]);
		}
		fprintf(stderr,"\n");
	}
	//fprintf(stderr,"\n");
}



