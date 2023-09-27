#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

int main(){

	int n,tmp,sum=0,tmp_min;
	scanf("%d",&n);
	int table[n][n],check[n],num_of_group=0,parent,child;
	vector<int> Group;

	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			scanf("%d",&tmp);
			table[i][k]=tmp;
		}
		check[i]=0;
	}

	Group.push_back(0);
	check[0]=1;
	num_of_group = 1;
	while(num_of_group<n){
		tmp_min=2001;

		for(int i=0;i<num_of_group;i++){
			for(int k=0;k<n;k++){
				if(table[Group[i]][k]!=-1&&check[k]==0&&table[Group[i]][k]<tmp_min){
					tmp_min = table[Group[i]][k];
					parent=Group[i];
					child = k;
				}
			}
		}
		Group.push_back(child);
		sum+=table[parent][child];
		check[child]=1;
		num_of_group++;
	}

	printf("%d\n",sum);

    return 0;
}