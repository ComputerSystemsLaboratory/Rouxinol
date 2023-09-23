#include <iostream>
using namespace std;

const int INF = 1000000000;

int main()
{
	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		int T[10][10];
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				if(i==j){
					T[i][j] = 0;
				}
				else{
					T[i][j] = INF;
				}
			}
		}

		int m = 0;		//町の総数

		for(int i=0; i<n; i++){
			int a, b, c;
			cin >> a >> b >> c;

			T[a][b] = T[b][a] = c;

			if(a+1>m){
				m = a+1;
			}
			if(b+1>m){
				m = b+1;
			}
		}

        for(int l=0;l<m;l++){
            for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                    if(T[i][j]>T[i][l]+T[l][j]){
                        T[i][j]=T[i][l]+T[l][j];
                    }
                }
            }
        }
        int sum[10];
        for(int i=0;i<m;i++){
            sum[i]=0;
            for(int j=0;j<m;j++){
                if(T[i][j]!=INF){
                    sum[i]+=T[i][j];
                }
            }
        }
        int min=sum[0];
        int k=0;
        for(int i=1;i<m;i++){
            if(min>sum[i]){
                min=sum[i];
                k=i;
            }
        }
        cout<<k<<' '<<min<<endl;




	}

	return 0;
}

