#include <bits/stdc++.h>



using namespace std;



static const int INF = 99999;



int main(){



	int n,array[100][100];



	cin>>n;



	for(int i=0; i<n; i++){

		fill(array[i],array[i]+n,INF);

	}



	for(int i=0; i<n; i++){

		for(int j=0; j<n; j++){

			int tmp;

			cin>>tmp;

			if(tmp!=-1) array[i][j]=tmp;

		}

	}



	int ans=INF;

	

	for(int k=0; k<n; k++){

		bool flag[100];

		fill(flag,flag+n,false);

		flag[k]=true;



		int tmp=0;

		while(1){

			int u=-1,minv=INF;

			for(int i=0; i<n; i++){

				if(!flag[i]) continue;

				for(int j=0; j<n; j++){

					if(!flag[j] && array[i][j]<=minv){

						minv = array[i][j];

						u = j;

					}	

				}

			}

			if(minv==INF){

				break;

			}else{

				tmp += minv;

				flag[u]=true;

			}

		}

		ans = min(ans,tmp);

	}



	cout<<ans<<endl;



	return 0;

}