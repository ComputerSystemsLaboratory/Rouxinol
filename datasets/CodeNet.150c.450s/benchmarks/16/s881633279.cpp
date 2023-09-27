#include <stdlib.h>
#include <stack>
#include <list>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string cross_section;
	stack<int> positions;
	list<pair<int, int> > water_area;
	int result = 0;
	cin >> cross_section;

	int end_position = cross_section.length();
	for(int current_position = 0; current_position < end_position; ++current_position){
		int merge_area = 0;
		if(cross_section[current_position] == '_'){
			continue;
		}else if(cross_section[current_position] == '\\'){
			positions.push(current_position);
		}else if(cross_section[current_position] == '/'){
			if(!positions.empty()){
				result += current_position - positions.top();
				while(!water_area.empty()){
					if(water_area.front().first > positions.top()){
						merge_area += water_area.front().second;
						water_area.pop_front();
					}else{
						break;
					}
				}
				water_area.push_front(pair<int, int>(positions.top(), merge_area + current_position - positions.top()));
				positions.pop();
			}
		}
	}
	cout << result << endl;
	cout << water_area.size();
	while(!water_area.empty()){
		cout << " " << water_area.back().second;
		water_area.pop_back();
	}
	cout << endl;

	return 0;
}