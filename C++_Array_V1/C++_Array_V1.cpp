// C++_Array_V1.cpp : Defines the entry point for the console application.
// Simple array 

#include"stdafx.h"
#include<iostream>
using namespace std;
void array_delcare_1();

int main()
{
	
	array_delcare_1();

}

void array_delcare_1() {
	cout << "Array Declaration - 1 \n" << endl;
	int size = 3; int i = 0;
	int* myarr = new int[size]; // myarr pointer of type int
	for (i = 0; i < size; i++)
		myarr[i] = 10;
	for (i = 0; i < size; i++)
		printf("myarr[%d] = %d \n", i, myarr[i]);
	delete[] myarr;
}