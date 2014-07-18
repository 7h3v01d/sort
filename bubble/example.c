#include <stdlib.h>
#include <stdio.h>

#include "bubble.h"


int compare( const void *p1, const void *p2 );


int main( int argc, char **argv )
{
	(void)argc;
	(void)argv;


	int a[10];
	int i;


	srand( 0x04C11DB7 );

	printf( "unsorted\n" );
	for( i = 0; 10 > i; ++i ) {
		a[i] = rand();
		printf( "a[%d]: %d\n", i, a[i] );
	}

	bubblesort( a, 10, sizeof(int), (const bubble_cmp_proc_t *)compare );

	printf( "sorted\n" );
	for( i = 0; 10 > i; ++i ) {
		printf( "a[%d]: %d\n", i, a[i] );
	}

	return EXIT_SUCCESS;
}


int compare( const void *p1, const void *p2 )
{
	if( *(int *)p1 > *(int *)p2 ) {
		return 1;
	}
	else
	if( *(int *)p1 < *(int *)p2 ) {
		return -1;
	}
	return 0;
}
