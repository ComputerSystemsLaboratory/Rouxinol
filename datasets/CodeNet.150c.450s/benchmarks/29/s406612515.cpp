#include<stdio.h> 
using namespace std;

struct ELEMENT{
	int value = -1;
	ELEMENT *prev;
	ELEMENT *next;
};


void insert(ELEMENT* dummy, int &value, int &first){
	ELEMENT *new_value = new ELEMENT;
	new_value -> value  = value;

	new_value -> next = dummy -> next;
	new_value -> prev = dummy;
	
	dummy -> next -> prev = new_value;
	dummy -> next = new_value;

	if(first){
		dummy -> prev = new_value;
		first = 0;
	}
}

void delete_(ELEMENT* dummy, int &value){
	ELEMENT *temp = dummy -> next;
	while(temp != dummy){
		int &check = temp -> value;

		if(check == value){
			// Find the first element
			ELEMENT *temp_prev = temp -> prev;
			ELEMENT *temp_next = temp -> next;
			temp_prev -> next = temp_next;
			temp_next -> prev = temp_prev;
			delete temp;
			break;
		}
		temp = temp -> next;
	}
}

void delete_first(ELEMENT* dummy){
	ELEMENT* to_delete = dummy -> next;

	dummy -> next = to_delete -> next;
	to_delete -> next -> prev = dummy;
	delete to_delete;
}

void delete_last(ELEMENT* dummy){
	ELEMENT* temp = dummy -> prev;
	temp -> prev -> next = dummy;
	dummy -> prev = temp -> prev;
}

void show(ELEMENT* dummy){
	ELEMENT *temp = dummy -> next;
	int check = 1;
	while(temp -> value != -1){
		if(check){
			printf("%i", temp -> value);
			check = 0;
		}else{
			printf(" %i", temp -> value);
		}
		temp = temp -> next;
	}
	printf("\n");
}


int main(){
	int n;
	scanf("%d", &n);

	// Initialization
	ELEMENT *dummy = new ELEMENT;
	dummy -> prev = dummy;
	dummy -> next = dummy;

	// Get commands
	char command[15];
	int value;
	int first = 1;
	for(int i=0; i<n; i++){
		scanf("%s", command);

		if(command[0] == 'i'){
			scanf("%d", &value);
			insert(dummy, value, first);
		}else if(command[6] == 'F'){
			delete_first(dummy);		
		}else if(command[6] == 'L'){
			delete_last(dummy);
		}else if(command[0] == 'd'){
			scanf("%d", &value);
			delete_(dummy, value);
		}
		
	}
	show(dummy);

	return 0;
}
