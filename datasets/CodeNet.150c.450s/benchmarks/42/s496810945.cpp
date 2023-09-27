#include <stdio.h>
#define MAX_N (100010)
typedef struct{
    char name[12];
    int time;
} Process;



Process queue[MAX_N];
int head;
int tail;

static
void 
initialize();


static
void
enqueue( Process x );


static
Process
dequeue();


static
bool
isEmpty();


int n, q;

int main()
{
    int i;
    int time = 0;
    scanf("%d", &n);
    scanf("%d", &q);

    for ( i = 0; i < n; i++ ) {
	Process p;
	scanf("%s", p.name );
	scanf("%d", &p.time );
	enqueue( p );
    }

    while( !isEmpty() ) {
	Process p = dequeue();
	if ( p.time > q ) {
	    p.time -= q;
	    time += q;
	    enqueue( p );
	}
	else {
	    time += p.time;
	    printf("%s %d\n", p.name, time);
	}
    }
    
    return 0;
}




static
void 
initialize()
{
    head = 0;
    tail = 0;
}


static
void
enqueue( Process x )
{
    queue[tail] = x;
    tail = ( tail + 1 ) % MAX_N;
}


static
Process
dequeue()
{
    Process ret = queue[head];
    head = ( head + 1 ) % MAX_N;

    return ret;
}


static
bool
isEmpty()
{
    return ( head == tail);
}