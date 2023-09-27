#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef map<int, int> I2imap;

int main(int argc, char *argv[]) {
	I2imap get_map;
	vector<int> num_list;
	
	// init map
	for (int i = 1; i < 101; i++) {
		get_map.insert(I2imap::value_type(i, 0));
	}
	// load
	while (true) {
		int rcv;
		if (EOF == fscanf(stdin, "%d", &rcv)) {
			break;
		}
		get_map[rcv]++;
	}
	// search max mode value
	int max_mv = 0;
	I2imap::iterator itr = get_map.begin();
	while (itr != get_map.end()) {
		if ((*itr).second > max_mv) {
			max_mv = (*itr).second;
		}
		itr++;
	}
	// get number having max mode value
	itr = get_map.begin();
	while (itr != get_map.end()) {
		if ((*itr).second == max_mv) {
			num_list.push_back((*itr).first);
		}
		itr++;
	}
	sort(num_list.begin(), num_list.end());
	// print result
	vector<int>::iterator v_itr = num_list.begin();
	while (v_itr != num_list.end()) {
		printf("%d\n", (*v_itr));
		v_itr++;
	}
	return 0;
}