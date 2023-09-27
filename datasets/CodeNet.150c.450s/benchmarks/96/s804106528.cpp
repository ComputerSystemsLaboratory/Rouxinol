#include <iostream>
#include <string>

using namespace std;

struct wait{
	char num;
	int count;
};

void out(int, int);

int main(){
	int n;
	string input;
	struct wait now;
	int i, j;
	
	cin >> n;
	for(i = 0; i < n; i++){
		now.count = 0;
		cin >> input;
		
		for(j = 0;j < input.size(); j++){
			if(input[j] == '0'){
				out(now.num - '0', now.count);
				now.count = 0;
			}
				
			else{
				now.num = input[j];
				now.count++;
			}
		}
		cout << endl;
	}
	
	return 0;
}

void out(int num, int count){
	char output[9][5] = {{'.', ',', '!', '?', ' '}, {'a', 'b', 'c'}, {'d', 'e', 'f'},
						{'g', 'h', 'i'}, {'j', 'k', 'l'}, {'m', 'n', 'o'},
						{'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};
	int size[] = {5, 3, 3, 3, 3, 3, 4, 3, 4};
	int which;
	
	if(count == 0)
		return;
	
	if(count % size[num - 1] == 0)
		which = size[num - 1] - 1;
	else
		which = count % size[num - 1] - 1;
	cout << output[num - 1][which];
}