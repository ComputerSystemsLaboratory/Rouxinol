#include <cstdio>
#include <fstream>
#include <vector>
#include <utility>
#include <climits>

using namespace std;

struct flood {
	vector <int> heights={0};
	vector <pair<int, int>> areas;
	vector <int> sum;
	int total = 0;
	flood(char oinput[]){
		transform(oinput);
		findAll();
		calAll();
		print();
	}
	void transform(char oinput[]){
		char before = oinput[0];
		int level = 0;
		for (int i = 0; oinput[i] != '\0'; i++) {
//			printHeight();
//			printf(" get char %c\ level = %d \n",oinput[i], level);
			switch (oinput[i]) {
				case '\\':
					if (before == '/') {
						heights.push_back(level);
					}
					level--;
					before = '\\';
					break;
				case '/':
					if (before == '\\') {
						heights.push_back(level);
					}
					level++;
					before = '/';
					break;
				case '_':
					if (before != '_') {
						heights.push_back(level);
					}
					heights.push_back(level);
					before = '_';
					break;
			}
		}
		heights.push_back(level);
	}

	int findNextPoint(int starti){
		int init = heights[starti];
		int max = INT_MIN;
		int index = 0;
		for (int i = starti + 1; i < heights.size(); i++) {
			if (heights[i] >= init) {
				return i;
			}
			if (heights[i] > max) {
				max = heights[i];
				index = i;
			}
		}
		if (index == 0) {
			index = heights.size() - 1;
		}
		return index;
	}

	void findAll() {
		pair <int, int> mark;
		int starti = 0;
		while (starti < heights.size()-1) {
			mark.first = starti;
			starti = findNextPoint(starti);
			mark.second = starti;
			areas.push_back(mark);
//			printf("%d, %d\n", mark.first, mark.second);
		}
	}

	double calArea1(int topLevel, int starti){
		int start = heights[starti];
		int end = heights[starti+1];
		if(start==end){
			return (topLevel-start);
		}
		if(end>start){
			int m=start;start=end;end=m;
		}

		int width = start - end;
		if(topLevel>start){
			return (topLevel - end) * width - width * width / 2.0;
		}else {
			return (topLevel - end) * (topLevel - end) / 2.0;
		}
	}
	double cal1Area(pair <int, int> area) {
		int topLevel=heights[area.first];
		double sum = 0.0;
		if(heights[area.first]>heights[area.second]){topLevel=heights[area.second];}
		for (int i = area.first; i < area.second; i++) {
			sum += calArea1(topLevel, i);
		}
		return sum;
	}
	void calAll() {
		double temp = 0.0;
		for (int i = 0; i < areas.size(); i++) {
			temp = cal1Area(areas[i]);
//			printf("i= %d, area=%f\n",i,temp);
			if (temp > 0) {
				sum.push_back(temp);
				total += temp;
			}
		}

	}

	void print() {
//		printf("[");
//		for (int i = 0; i < heights.size(); i++) {
//			printf(" %d", heights[i]);
//		}
//		printf("]\n");
//
//		printf("[");
//		for (int i = 0; i < areas.size(); i++) {
//			printf("pair: %d %d ", areas[i].first, areas[i].second);
//		}
//		printf("]\n");

		printf("%d\n", total);
		printf("%d", sum.size());
		for (int i = 0; i < sum.size(); i++) {
			printf(" %d", sum[i]);
		}
		printf("\n");
	}
};

int main() {
	char oinput[20000];
	scanf("%[^\n]%*c", oinput);
//	FILE *fp = fopen("myinput.txt", "r");  fscanf(fp, "%[^\n]%*c", oinput);        fclose(fp);

	flood *m = new flood(oinput);
//	m->calculation();

}

