//2013/11/15(Fri)

#include <iostream>
using namespace std;
int main()
{
	
	while(true){
		int n;
		int a,b,c;
		int INF = -1;
		int time[10][10];
		int m=0;
		int min=0,imin=0;
		cin >> n;
		if(n==0)
			break;
		for(int i=0; i<10; i++)
			for(int j=0; j<10; j++){
				if(i==j)
					time[i][j] = 0;
		
				else
					time[i][j] = INF;
			}

		for(int i=0; i<n; i++){
			cin >> a >> b >> c;
			time[a][b] = c;
			time[b][a] = c;
			if(m<a)
				m=a;
			if(m<b)
				m=b;
		}


		for(int h=0; h<m+1; h++)
			for(int i=0; i<m+1; i++)
				for(int j=0; j<m+1; j++)
					if(time[i][h]==INF||time[h][j]==INF)
                        continue;
                    else if(time[i][j]==INF)
                        time[i][j] = time[i][h]+time[h][j];
                    else if(time[i][j]>time[i][h]+time[h][j])
                        time[i][j] = time[i][h]+time[h][j];

									
		
		for(int i=1; i<m+1; i++)
			min += time[0][i];


		for(int i=1; i<m+1; i++){
            int sum = 0;
            for(int j=0; j<m+1; j++)
                sum += time[i][j];
            if(sum<min){
                imin = i;
                min = sum;
            }
        }

		cout << imin << ' ' << min << endl;
	}
	return 0;
	
}