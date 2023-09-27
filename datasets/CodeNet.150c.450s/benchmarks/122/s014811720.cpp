#include <iostream>
#include <queue>

int main()
{
	std::priority_queue<int> que;
	
	std::string buf;
	while (true) {
		getline(std::cin, buf);
		int sp_pos = buf.find(' ', 0);
		if (sp_pos>=0) {
			// insert
			int key = std::stoi(buf.substr(sp_pos+1));
			que.push(key);
		}
		else {
			std::string op = buf.substr(0, sp_pos);
			if (op == "end") break;
			else {
				// extract
				std::cout << que.top() << std::endl;
				que.pop();
			}
		}
	}
	
	return 0;
}

