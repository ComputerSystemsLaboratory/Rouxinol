#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<iomanip>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;

int main(){

	while(true){

		int map[21][21];
		int x=10,y=10;
		int count=0;

		for(int i=0;i<21;i++){
			for(int j=0;j<21;j++){
				map[i][j]=0;
			}
		}

		int number,a,b;
		int stone;

		cin >> number;

		stone = number;

		if(number == 0) break;


		//cout << "あ" << endl;

		for(int i=0;i<number;i++){
			cin >> a >> b;
			map[a][b] = 1;
		}

		cin >> number;

		string aim;
		int num;


		for(int i=0;i<number;i++){
			cin >> aim >> num;
			
/*			for(int j=0;j<21;j++){
				for(int k=0;k<21;k++){
					cout << map[j][k] << " ";
				}
				cout << endl;
			}
*/			
			
			if(aim == "N"){
				for(int j=0;j<num;j++){
					y++;
					if(map[x][y]==1){
						count++;			
						map[x][y]=0;
					}
				}
			}
			else if(aim == "E"){
				for(int j=0;j<num;j++){
					x++;
					if(map[x][y]==1){
						count++;			
						map[x][y]=0;
					}
				}
			}
			if(aim == "S"){
				for(int j=0;j<num;j++){
					y--;
					if(map[x][y]==1){
						count++;			
						map[x][y]=0;
					}
				}
			}
			if(aim == "W"){
				for(int j=0;j<num;j++){
					x--;
					if(map[x][y]==1){
						count++;			
						map[x][y]=0;
					}
				}
			}

		}
		if(count==stone){
			cout << "Yes" << endl;	
		}
		else{
			cout << "No" << endl;
		}




	}

}