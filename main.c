#include<stdio.h>
#include<stdlib.h>
#include"xulie.h"

int main()
{
	int *L = malloc(sizeof(int)*100);
	list_insert(10,L);
	list_insert(11,L);
	list_insert(7,L);
	list_insert(9,L);
	small_to_large(L);
	print_list(L);
	int e = rm_list_index(3,L);
	print_list(L);
	printf("e:%d\n",e);
	int *P = calloc(1,128);
	printf("%p\n",p);

}
