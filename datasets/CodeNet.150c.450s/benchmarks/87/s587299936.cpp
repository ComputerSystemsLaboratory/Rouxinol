#include<vector>
#include<iostream>
#define F(A, B, M) for(int A=B; A<M; A++)
using namespace std;

int printall(vector<vector<int> > wall, int H){
	F(i, 0, H){
		F(j, 0, 5){
			cout << wall[i][j] << ' ';
		}
		cout << endl;
	}
}
			

int main(){
	int H;
	cin >> H;
	while(H != 0){
		vector<vector<int> > wall;
		vector<int> line;
		int score=0, tmp;

		F(i, 0, H){
			line.clear();
			F(j, 0, 5){
				cin >> tmp;
				line.push_back(tmp);
			}
			wall.push_back(line);
		}
		F(r, 0, 20){
			F(i, 0, H){
				int cnt=1;
				F(j, 1, 5){
					if(wall[i][j] == -1)continue;
					if(wall[i][j] == wall[i][j-1]){
						cnt++;
						if(j == 4 && cnt >= 3){
							score += wall[i][j]*cnt;
							F(k, j-cnt+1, j+1){
								wall[i][k] = -1;
							}
						}
					}else if(cnt >= 3){
						score += wall[i][j-1]*cnt;
						F(k, j-cnt, j){
							wall[i][k] = -1;
						}
						cnt = 1;
					}else{
						cnt = 1;
					}
				}
			}
			//printall(wall, H);

			//fall
			for(int i=H-1; i>=0; i--){
				F(j, 0, 5){
					if(wall[i][j] == -1){
						for(int k=i-1; k>=0; k--){
							if(wall[k][j] != -1){
								wall[i][j] = wall[k][j];
								wall[k][j] = -1;
								break;
								}
						}
					}
				}
			}
		}

		cout << score << endl;
		cin >> H;
	}

}