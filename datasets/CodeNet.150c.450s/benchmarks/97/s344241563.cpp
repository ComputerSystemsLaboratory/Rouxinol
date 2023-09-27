#include<iostream>
#include<utility>
using namespace std;

const int dire4[8] = {
	-1, 0,
	0, 1,
	1, 0,
	0, -1
};

int main(){
	pair<int, int> box[200];
	
	while(1){
		box[0].first = 0;
		box[0].second = 0;
		int N;
		cin >> N;
		if(N == 0) break;
		int width = 1, height = 1;
		for(int i = 1;i < N;i++){
			int n, d;
			cin >> n >> d;
			box[i].first = box[n].first + dire4[d * 2];
			box[i].second = box[n].second + dire4[d * 2 + 1];
			bool ext = true;
			for(int j = 0;j < i;j++){
				if(d % 2 == 0){
					if(box[i].first == box[j].first){
						ext = false;
						break;
					}
				}else{
					if(box[i].second == box[j].second){
						ext = false;
						break;
					}
				}
			}
			if(ext){
				if(d % 2 == 0) width++;
				else height++;
			}
		}
		
		cout << width << ' ' << height << endl;
	}
	
	return 0;
}