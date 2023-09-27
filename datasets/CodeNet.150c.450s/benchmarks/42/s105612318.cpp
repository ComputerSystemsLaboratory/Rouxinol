#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

typedef struct process {
    string name;
    int time;
} process_t;
int head = 0;
int tail = 0;
int t = 0;

vector<process_t> arr;
void enqueue(process_t p)
{
    tail++;
    //        arr[tail] = arr[h];
    arr.push_back(p);
}

process_t dequeue()
{
    process_t p = arr[head];
    //    arr.erase(arr.begin());
    head++;
    return p;
}

void print_arr(string name, int time) { cout << name << " " << time << endl; }

void solve(int q)
{

    while (head <= tail) {
	process_t p = dequeue();
	if (p.time > q) {
	    p.time = p.time - q;
	    t += q;
	    enqueue(p);
	} else {
	    t += p.time;
	    print_arr(p.name, t);
	}
	//    if (head>tail) {
	//      return;
	//}
	//solve(q);
    }
}

int main()
{
    int N = 0;
    int q = 0;
    cin >> N;
    cin >> q;
    tail = N - 1;
    //process_t* arr = (process_t*)malloc(100 * sizeof(process_t));
    for (int i = 0; i < N; i++) {
	//	cin >> arr[i].name >> arr[i].time;
	process_t p = {};
	cin >> p.name;
	cin >> p.time;
	arr.push_back(p);
    }
    solve(q);
    return 0;
}