#include <iostream>
//#include <utility>
#include <stack>

using namespace std;
static const int MAX_STR_LEN = 20000;

void sh_result(stack< pair<int, int> > st);
void get_result(stack< pair<int, int> > *st);

int main(){
	int i, str_len;


	stack< pair<int, char> > st_block;  // ??°??¢?¨?????????????, ??°??¢?¨????(/, _, \)
	stack< pair<int, int> > st_area;    // ?°´?????????????????´???????????????, ??¢???

	string str;

	cin >> str;
	str_len = str.size();

	for (i = 0; i < str_len; i++) {
//		printf("str i = %d\n", i);
		switch (str[i]) {
		case '\\' :
			if (i == 0)
				st_area.push( make_pair(i, 0) );
			else if (str[i - 1] != '\\')
				st_area.push( make_pair(i, 0) );
			st_block.push( make_pair(i, str[i]) );
			break;
		case '_' :
			if (i == 0) {}
			else if (str[i - 1] == '/')
				st_area.push( make_pair(i, 0) );
			// 	st_area.push( make_pair(i, 0) );
			break;
		case '/' :
			if ( !(st_block.empty()) ) {
				auto b = st_block.top(); st_block.pop();
				if ( !(st_area.empty()) ) {
					auto a = st_area.top(); st_area.pop();
					while (a.first > b.first) {
						auto c = st_area.top(); st_area.pop();
						a.first = c.first;
						a.second += c.second;
					}
					if (a.first <= b.first) {
						a.second += i - b.first;
						st_area.push( a );
					}
				}
			}
			break;
		}
//		sh_result(st_area);
	}

		get_result(&st_area);

	return 0;
}


void sh_result(stack< pair<int, int> > st) {
	int i, st_size;
	st_size = st.size();
	printf("stack size = %d\n",st_size);
	for (i = 0; i < st_size; i++) {
		cout << st.top().first << ',' << st.top().second << endl;
		st.pop();
	}

}

void get_result(stack< pair<int, int> > *st) {
	int i, st_size, num = 0, area = 0;
	int empty_flag  = 0;
	int area_each_puddle[MAX_STR_LEN / 2] = {0};

	st_size = st->size();
//	printf("st_size = %d\n", st_size);

	for (i = 0; i < st_size && empty_flag != 1; i++) {
//		printf("i = %d\n", i);

		while (st->size() > 0) {
//			printf("stack size = %lu\n", st->size());

//			printf("before second 1\n");
			if (st->top().second == 0) {
//				printf("before pop 1\n");
				st->pop();
//				printf("after pop 1\n");
				if (st->size() == 0) {
					empty_flag = 1;
					break;
				}
			}
			else {
				break;
			}
		}

		if (empty_flag == 1) {
			break;
		}
		else {
//			printf("before second 2\n");
			area_each_puddle[i] = st->top().second;
			area += area_each_puddle[i];
			num++;
//			printf("before pop 2\n");
			st->pop();
//			printf("after pop 2\n");
			if (st->size() == 0) {
				empty_flag = 1;
				break;
			}
		}
	}

	//print result
	cout << area << endl;
	if (area == 0) {
		cout << 0 << endl;
	}
	else {
		// print num of puddle
		cout << num;

		//print each area of puddles
		for (i = num - 1; i >= 0; i--)
			cout << ' ' << area_each_puddle[i];

		cout << endl;
	}
}