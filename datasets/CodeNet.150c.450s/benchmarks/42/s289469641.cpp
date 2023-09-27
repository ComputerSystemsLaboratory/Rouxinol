#include <stdio.h>

struct task_info
{
	char name[ 11 ];
	int rest_time;
	task_info* next_task;
};
task_info task_data[ 100000 ];

int main( int argc , char** argv )
{
	int task_count;
	int quantum;

	//read n and q
	scanf( "%d %d" , &task_count , &quantum );

	//read name and time
	for( int i = 0 ; i < task_count ; i++ )
	{
		scanf( "%s %d" , &task_data[ i ].name , &task_data[ i ].rest_time );
	}

	//initialize next_task member
	for( int i = 0 ; i < task_count - 1 ; i++ )
	{
		task_data[ i ].next_task = &task_data[ i + 1 ];
	}
	task_data[ task_count - 1 ].next_task = &task_data[ 0 ];

	//first state
	task_info* current_task = &task_data[ 0 ];
	task_info* prev_task = &task_data[ task_count - 1 ];

	//execute!
	int current_time = 0;
	while( 1 )
	{
		//check if current_task complete
		if( current_task->rest_time <= quantum )
		{
			//completed
			current_time += current_task->rest_time;
			printf( "%s %d\n" , current_task->name , current_time );
			if( current_task->next_task == current_task )
			{
				break;
			}
			else
			{
				prev_task->next_task = current_task->next_task;
			}
		}
		else
		{
			//not completed
			current_time += quantum;
			current_task->rest_time -= quantum;
			prev_task = current_task;
		}
		current_task = current_task->next_task;
	}

	return 0;
}