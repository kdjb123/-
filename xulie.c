#include"xulie.h"
#include <stddef.h>
#include <stdio.h>



/****************************************************
*	函数名  :get_list_len
*	作用    :获取整数顺序表的长度
*	参数	:@L 顺序表的头指针
*	返回值	:成功返回长度len,失败则返回0
*****************************************************/
int get_list_len(int *L)
{
    if(NULL==L)
	{
		printf("该列表为空\n");
		return 0;
	}
    int len=0;
	for(;*(L+len)!=0;len++){}
    return len;
}


/****************************************************
*	函数名  :list_insert
*	作用    :在一个整数顺序表中插入一个整数到表尾
*	参数	:@x 要插入的整数
*			 @L 顺序表的头指针
*	返回值	:成功返回1失败返回0
*****************************************************/
int list_insert(int x,int *L)
{
	if(NULL==L)
	{
		printf("该列表为空\n");
		return 0;
	}
	if(0==x)
	{
		printf("不可以输入0\n");
	}
	int i= get_list_len(L);
	*(L+i) = x;
	return 1;
}

/****************************************************
*	函数名  :print_list
*	作用    :打印一个整数顺序表
*	参数	: @L 顺序表的头指针
*	返回值	:None
*****************************************************/
void print_list(int *L)
{
	if(NULL==L)
	{
		printf("该列表为空\n");
		return;
	}
	for(int i=0;*(L+i)!=0;i++)
	{
		printf("%d\t",*(L+i));
	}
	printf("\n");
}

/****************************************************
*	函数名  :small_to_large
*	作用    :排列一个整数顺序表从小到大的顺序
*	参数	: @L 顺序表的头指针
*	返回值	:成功返回1，失败返回0
*****************************************************/
int small_to_large(int *L)
{
	if(NULL==L)
	{
		printf("该列表为空\n");
		return 0;
	}
	int len = get_list_len(L);
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(*(L+j)>*(L+j+1))
			{
				int temp = *(L+j+1);
				*(L+j+1) = *(L+j);
				*(L+j) = temp;
			}
		}
	}
	return 1;
}

/****************************************************
*	函数名  :rm_list_index
*	作用    :删除顺序表中下标为p的元素
*	参数	:@p 序列的下标 
*			@L 顺序表的头指针
*	返回值	:成功返回被删除的元素，失败则返回0
*****************************************************/
int rm_list_index(int p,int *L)
{
	if(NULL==L)
	{
		printf("该列表为空\n");
		return 0;
	}
	int len = get_list_len(L);
	if(0<=p&&p<=len-1)
	{
		int value = *(L+p);
		
		for(int i=p;i<len;i++)
		{
			*(L+i) = *(L+i+1);
			if(*(L+i+1)==*(L+len-1))
			{
				*(L+len-1) = 0;
				return value;
			}
		}
	}
	else
	{
		printf("下标p不在列表范围内\n");
		return 0;
	}
}


