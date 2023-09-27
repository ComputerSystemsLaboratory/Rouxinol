#include<cstdio>
#include<vector>
using namespace std;
#define MAX 100000;

void DepthFirstSearch(int present_vertex, bool has_not_been_discovered[], vector<int> Adjacency_list[], int Group_number[], int group_number){
	int pv = present_vertex;
	has_not_been_discovered[pv] = false;
	Group_number[pv] = group_number;
	for(int i = 0;i < Adjacency_list[pv].size();++i){
		if(has_not_been_discovered[Adjacency_list[pv][i]]){
			DepthFirstSearch(Adjacency_list[pv][i], has_not_been_discovered, Adjacency_list, Group_number, group_number);
		}
	}
}

void DfsInit(int n, bool has_not_been_discovered[]){
	for (int i = 0; i < n; ++i)
		has_not_been_discovered[i] = true;
}

int main(){
	int number_of_users, number_of_friendships;
	scanf("%d %d", &number_of_users, &number_of_friendships);
	vector<int> Adjacency_list[number_of_users];
	for (int i = 0; i < number_of_friendships; ++i)	{
		int friend1, friend2;
		scanf("%d %d", &friend1, &friend2);
		Adjacency_list[friend1].push_back(friend2);
		Adjacency_list[friend2].push_back(friend1);
	}
	bool has_not_been_discovered[number_of_users];
	DfsInit(number_of_users, has_not_been_discovered);
	int Group_number[number_of_users];
	int group_number = 1;
	for (int user_i = 0; user_i < number_of_users; ++user_i){
		if(has_not_been_discovered[user_i])
			DepthFirstSearch(user_i, has_not_been_discovered, Adjacency_list, Group_number, group_number++);
	}
	int number_of_questions;
	scanf("%d", &number_of_questions);
	for (int i = 0; i < number_of_questions; ++i) {
		int user1, user2;
		scanf("%d %d", &user1, &user2);
		if(Group_number[user1] == Group_number[user2])
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}