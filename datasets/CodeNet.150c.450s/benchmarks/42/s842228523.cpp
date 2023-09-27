#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	int n,q;
	int elapsed_time=0; //????????????
	queue<int> TIME;
	queue<string> NAME;
	cin>>n>>q;

	//??\???
	for(int i=0;i<n;i++){
		string name;
		int time;
		cin>>name>>time;
		NAME.push(name);
		TIME.push(time);
	}

	//??????
	while(! NAME.empty()){
		if(TIME.front()>q){
			elapsed_time+=q;

			//?????????????????£?????????????????????
			string temp_name=NAME.front();
			NAME.pop();
			NAME.push(temp_name);

			int temp_time=TIME.front()-q;
			TIME.pop();
			TIME.push(temp_time);
		} else {
			elapsed_time+=TIME.front();
			TIME.pop();
			cout<<NAME.front()<<" "<<elapsed_time<<endl;
			NAME.pop();
		}
	}

	return 0;
}