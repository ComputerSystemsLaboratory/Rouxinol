#include <iostream>
#include <queue>
using namespace std;

struct process{
	string name;
	int time_ms;
};

int main() {
	int n,q,time_temp;
	string name_temp;
	queue<process> Process_Begin,Process_EndLog;
	process process_temp;
	
	cin >> n >> q;
	
	for(int i = 0;i < n;i++){
		cin >> name_temp >> time_temp;
		Process_Begin.push(process{
			name_temp,
			time_temp});
	}
	
	time_temp = 0;
	
	while(Process_Begin.empty() != true){
		process_temp = Process_Begin.front();
		
		if(process_temp.time_ms - q <= 0){
			time_temp += process_temp.time_ms;
			Process_EndLog.push(process{
				process_temp.name,
				time_temp
			});
		}else{
			time_temp += q;
			process_temp.time_ms -= q;
			Process_Begin.push(process{
				process_temp.name,
				process_temp.time_ms
			});
		}
		Process_Begin.pop();
	}
	
	while(Process_EndLog.empty() != true){
		process_temp = Process_EndLog.front();
		Process_EndLog.pop();
		cout << process_temp.name << " " << process_temp.time_ms << endl;
	}
	
	return 0;
}