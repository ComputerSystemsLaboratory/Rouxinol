#include <stdio.h>
#include <algorithm>

using namespace std;

struct Info{
	Info(){m_node = m_distance = 0;}
	Info(int node,int distance){
		m_node = node;
		m_distance = distance;
	}
	int m_node,m_distance;
};

class InfoQueue{
public:
	InfoQueue(){
		info = new Info[10000];
		num_of_data = head = tail = 0;
	}
	bool isEmpty(){
		return num_of_data == 0;
	}
	void enqueue(Info data){
		info[tail] = data;
		tail = (tail+1)%10000;
		num_of_data++;
	}
	Info dequeue(){
		Info ret = info[head];
		head = (head+1)%10000;
		num_of_data--;
		return ret;
	}
private:
	Info* info;
	int head,tail,num_of_data;
};


int main(){

	int n,row,col,num;
	scanf("%d",&n);

	int table[n+1][n+1];
	int check_table[n+1];

	for(int i=1;i<=n;i++){
		check_table[i] = -1;
		for(int k=1;k<=n;k++)table[i][k] = 0;
	}

	for(int i=1;i<=n;i++){
		scanf("%d %d",&row,&num);
		for(int k=1;k<=num;k++){
			scanf("%d",&col);
			table[row][col]=1;
		}
	}

	check_table[1] = 0;

	InfoQueue Q;
	Q.enqueue(Info(1,0));

	Info tmp;
	while(!Q.isEmpty()){
		tmp = Q.dequeue();
		for(int i=1;i<=n;i++){
			if(table[tmp.m_node][i]==1 && check_table[i] == -1){
				check_table[i] = tmp.m_distance+1;
				Q.enqueue(Info(i,tmp.m_distance+1));
			}
		}
	}

	for(int i=1;i<=n;i++){
		printf("%d %d\n",i,check_table[i]);
	}

    return 0;
}