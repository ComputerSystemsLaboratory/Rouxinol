#include <iostream>
#include <string>
#include <queue>


struct ProcessInfo
{
	ProcessInfo() : name(), time()
	{
	}
	
	ProcessInfo(std::string n, int t) : name(n), time(t)
	{
	}
	
	std::string name;
	int time;
};


int main()
{
	int clock = 0;
	int n, q;
	std::cin >> n >> q;
	
	std::queue<ProcessInfo> pq;
	
	for (int i = 0; i < n; ++i) {
		ProcessInfo pi;
		std::cin >> pi.name >> pi.time;
		pq.push(pi);
	}
	
	while (!pq.empty()) {
		ProcessInfo pi = pq.front();
		pq.pop();
		
		if (pi.time > q) {
			pq.push(ProcessInfo(pi.name, pi.time - q));
			clock += q;
		} else {
			clock += pi.time;
			std::cout << pi.name << " " << clock << std::endl;
		}
		
	}
	
	return 0;
}