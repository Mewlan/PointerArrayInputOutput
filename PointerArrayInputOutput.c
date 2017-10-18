//
//  PointerArrayInputOutput.c
//  PointerArrayInputOutput
//
//  Created by Mewlan Musajan on 10/18/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>

void model();
void view(int *p);
void scanfArray(int *p);
void printfArray(int *p);

int main(int argc, char const *argv[])
{
	model();

	return 0;
}

void model()
{
	int a[10];
	int *p = a;
	view(p);
}

void view(int *p)
{
	printf("Enter 10 integer numbers:\n");
	scanfArray(p);
	printfArray(p);
	printf("\n");
}

void scanfArray(int *p)
{
	int *original;
	original = p;
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", p++);
	}
	p = original;
}

void printfArray(int *p)
{
	for (int i = 0; i < 10; ++i, ++p)
	{
		printf("%d ", *p);
	}
}