#include <iostream>
#include <vector>

using namespace std;

struct CODE
{
	char before;
	char after;
};

int main(void)
{
	int n;
	
	while (cin >> n, n != 0){
		vector<CODE> code;
		
		while (n-- > 0){
			CODE tmp;
			cin >> tmp.before >> tmp.after;
			code.push_back(tmp);
		}
		
		int m;
		cin >> m;
		while (m-- > 0){
			char c;
			
			cin >> c;
			for (int i = 0; i < code.size(); i++){
				if (c == code[i].before){
					c = code[i].after;
					break;
				}
			}
			cout << c;
		}
		cout << endl;
	}
	
	return 0;
}