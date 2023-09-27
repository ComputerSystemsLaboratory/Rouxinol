#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <tuple>
using namespace std;
/*
3
05:47:15 09:54:40
12:12:59 12:13:00
16:30:20 21:18:53
6
00:00:00 03:00:00
01:00:00 03:00:00
02:00:00 03:00:00
03:00:00 04:00:00
03:00:00 05:00:00
03:00:00 06:00:00
0
 */
int strtotime(string str){
	int hour = stoi(str.substr(0,2));
	int minute = stoi(str.substr(3,2));
	int second = stoi(str.substr(6,2));
	return(hour*3600+minute*60+second);
}

int main(int argc, char* argv[]){
	int n;
	vector<vector<string>> strarray;
	vector<int> answers;
	while(1){
		char tmp[100];
		scanf("%s", tmp);
		string str = tmp;
		if(str=="0") break;
		n = stoi(str);
		vector<tuple<int, int>> timearray;
		for(int i=0; i<n;i++){
			scanf("%s", tmp);
			string str1 = tmp;
			int start=strtotime(str1);
			scanf("%s", tmp);
			string str2 = tmp;
			int end=strtotime(str2);
			tuple<int, int> times = make_tuple(start, end);
			timearray.push_back(times);
		}
		sort(timearray.begin(), timearray.end());
		for(int i=0; i<n; i++){
//			printf("%d %d\n", get<0>(timearray[i]), get<1>(timearray[i]));
		}
		vector<int> train;
		train.push_back(0);
		int answer=1;
		for(int i=1; i<n; i++){
			bool flag=true;
			for(int j=0; j<(int)train.size(); j++){
				if(get<0>(timearray[i])>=get<1>(timearray[train[j]])){
//					printf("%d %d\n", get<0>(timearray[i]), get<1>(timearray[train[j]]));
					train[j] = i;
					flag=false;
					break;
				}
			}
			if(flag){
				train.push_back(i);
				for(int j=0; j<(int)train.size(); j++){
//				printf("input %d-%d %d\n", i,j, train[j]);
				}
				answer++;
			}
		}
		//			answers.push_back(timearray[0][0]);
		answers.push_back(answer);
		//		}
	}
	for(int i=0; i<(int)answers.size(); i++){
		printf("%d\n", answers[i]);
	}


	return 0;
}

/*
17
06:29:57 16:50:58
10:09:29 13:15:10
00:44:54 17:56:18
22:41:06 22:49:38
15:38:18 20:34:49
05:29:50 07:49:22
10:05:07 19:16:07
16:24:46 22:55:23
15:59:49 21:50:02
03:03:25 04:43:01
16:59:19 21:40:48
22:10:01 22:42:14
16:52:37 21:53:40
09:36:38 10:10:44
12:47:47 14:09:22
09:41:52 19:41:01
02:09:53 09:56:06
0
 */




