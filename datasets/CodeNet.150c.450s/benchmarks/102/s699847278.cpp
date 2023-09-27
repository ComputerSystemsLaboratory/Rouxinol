#include <iostream>
#include <string>
using namespace std;

string map[20];
int count,W,H;
int walk(int ,int);

int main(){
	int i,j;
	while(cin >> W >> H,(W || H)){
		count=0;
		for(i=0;i<H;i++) cin >> map[i];
		for(i=0;i<H;i++){
			for(j=0;j<W;j++){
				if(map[i][j]=='@') goto LOOP;
			}
		}
	LOOP:
		walk(i,j);
	cout << count << endl;
	}

}

int walk(int a,int b){
	map[a][b] = '#';
	count++;
	if(a+1<H && map[a+1][b]  == '.') walk(a+1,b);
	if(b+1<W && map[a][b+1]  == '.') walk(a,b+1);
	if(a-1>=0 && map[a-1][b]  == '.') walk(a-1,b);
	if(b-1>=0 && map[a][b-1]  == '.') walk(a,b-1);
	return 0;
}