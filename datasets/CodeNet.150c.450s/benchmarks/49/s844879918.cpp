

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,j,n) for(int i = j; i < n; i++)

float mean(vector<float> v) {
    int size = v.size();
    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += v[i];
    }
    return sum / size;
}

int main(){

	while(1){
		int N;
		cin >> N;
		if(N == 0){
			break;
		}

		vector<float> data(N);

		rep(i,data.size()){
			cin >> data[i];
		}

		sort(data.begin(),data.end());
		
		data.pop_back();
		data.erase(data.begin());

		cout << int(mean(data)) << endl;
	}

	return 0;
}