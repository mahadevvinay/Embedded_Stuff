/*  Program to implement an array. */

/* 1) For inserting element in array shift the elements right side
   2) For deleting skip desired postion
   3)Reversing Use XOR operation for optimised swapping 

*/
#include <stdio.h>
#define MAX 5

void insert ( int *a, int pos, int num ) 
{
	int i;
	for(i=MAX-1;i >= pos;i--)
	a[i]=a[i-1];
	a[i]=num;
/* test purpose
	for(i=0;i<MAX;i++)
	printf("%d\n",a[i]);
*/
}
void del ( int *a, int pos ) 
{
	int i;
	for(i=pos;i<MAX;i++)
	a[i-1]=a[i];
	a[i-1]=0;
}
void reverse ( int *a ) 
{
	int i;
	for(i=0;i<MAX/2;i++)
	{
		a[i] = a[i] ^ a[MAX-i-1];
		a[MAX-i-1] = a[i] ^ a[MAX-i-1];
		a[i] = a[i] ^ a[MAX-i-1];		
	}
}

void display ( int *a ) 
{
	int i;
	for(i=0;i<MAX;i++)
	printf("\na[%d]=%d",i,a[i]);
	printf("\n");
}
void search ( int *a, int num ) 
{
	int i,flag=0;
	for(i=0;i<MAX;i++)
	{
		if(a[i] == num)
		flag=1;
	}
	if(flag)
	printf("\nElement Found=%d",num);
	else
	printf("\nElement Not Found=%d\n",num);
	
}

int  main( )
{
	int arr[5] ;

	insert ( arr, 1, 11 ) ;
	insert ( arr, 2, 12 ) ;
	insert ( arr, 3, 13 ) ;
	insert ( arr, 4, 14 ) ;
	insert ( arr, 5, 15 ) ;
	printf ( "\nElements of Array: " ) ;

	display ( arr ) ;

	del ( arr, 4 ) ;
	del ( arr, 2 ) ;

	printf ( "\n\nAfter deletion: " ) ;

	display ( arr ) ;


	insert ( arr, 2, 222 ) ;
	insert ( arr, 4, 555 ) ;

	printf ( "\n\nAfter insertion: " ) ;

	display ( arr ) ;
	reverse ( arr ) ;
	printf ( "\n\nAfter reversing: " ) ;
	display ( arr ) ;
	search ( arr, 222 ) ;
	search ( arr, 666 ) ;

return 0;

}


