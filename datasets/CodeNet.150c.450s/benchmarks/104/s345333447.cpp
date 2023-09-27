#include <iostream>
#include <vector>

using namespace std;

typedef struct st_crossBar{
	int left;
	int right;
} CrossBar;

int main(void)
{
	int w = 0, n = 0;
	cin >> w >> n;
	
	vector<CrossBar> crossBarVec;
	for(int i = 0; i < n; i++){
		CrossBar crossBar = {0};
		
		char c;
		cin >> crossBar.left >> c >> crossBar.right;
		crossBarVec.push_back(crossBar);
	}
	
	vector<int> underNumVec;
	underNumVec.resize(w);
	
	for(int i = 1; i <= w; i++){
		int num = i;
		for(int j = 0; j < n; j++){
			if(num == crossBarVec[j].left){
				num = crossBarVec[j].right;
			}
			else if(num == crossBarVec[j].right){
				num = crossBarVec[j].left;
			}
			else{
				;
			}
		}
		
		underNumVec[num - 1] = i;
	}
	
	for(int i = 0; i < w; i++){
		cout << underNumVec[i] << endl;
	}
	
	return 0;
}