#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int INF=1000000;

int N;
int temp;
int ans;
vector<int> student;

int main() {
	while(true){
		//?????????
		ans=INF;
		while(student.size()>0)student.pop_back();


		cin>>N;
		if(N==0)break;

		for (int i = 0; i < N; i++) {
			cin>>temp;
			student.push_back(temp);
		}
		sort(student.begin(),student.end());
		for (int i = 0; i < N - 1; i++) {
			ans=min(ans,student[i+1]-student[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}