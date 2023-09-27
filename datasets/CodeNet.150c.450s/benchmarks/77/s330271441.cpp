	#include<stdio.h>
	#include<stdlib.h>
	#include<iostream>

	using namespace std;
	int N,M;
	struct houseki{
		int x,y;
		int flag;
	};
	struct order{
		char dir;
		int move;
	};

	struct houseki hou[20];
	struct order ord[30];

	int robo_x,robo_y;

	int main(void)
	{
		int i,j,k;

		int maflag;
		char temp[20];
		robo_x = 10;
		robo_y = 10;
		maflag = 0;

		while(1 ) 
		{
			robo_x = 10;
			robo_y = 10;
			for( i=0; i<20; i++ )
			{
				hou[i].flag = 0;
				hou[i].x = 0;
				hou[i].y =0;
			}
			scanf("%d",&N);
			if( N == 0 )
			{
				break;
			}
			for( i=0; i<N; i++ )
			{	
				cin >> hou[i].x >> hou[i].y;
				//scanf("%d %d",&hou[i].x, &hou[i].y);
				hou[i].flag = 0;
			}

			scanf("%d",&M);
			for( i=0; i<M; i++ )
			{
				cin >> ord[i].dir >> ord[i].move;
				/*scanf("%s",temp);
				ord[i].dir = temp[0];
				ord[i].move = atoi( &temp[2] );
				*/
			}
			
			for( i=0; i<M; i++ )
			{
				for( j=0; j<ord[i].move; j++ )
				{
					switch( ord[i].dir )
					{
					case 'N' :
						robo_y++;
						break;
					case 'E' :
						robo_x++;
						break;
					case 'S' :
						robo_y--;
						break;
					case 'W' :
						robo_x--;
						break;
					}
					for( k=0; k<N; k++ )
					{
						if( hou[k].x == robo_x && hou[k].y == robo_y )
						{
							hou[k].flag = 1;
						}
					}
				}
			}

			maflag = 1;

			for( i=0; i<N; i++ )
			{
				if( hou[i].flag == 0 )
				{
					maflag = 0;
				}
			}

			if( maflag == 1 )
			{
				printf("Yes\n");
			}else {
				printf("No\n");
			}

		}

		return 0;

	}