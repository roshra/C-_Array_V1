// C++_Array_V1.cpp : Defines the entry point for the console application.
// Simple array 

#include"stdafx.h"
#include<iostream>
#include <cstdio>
#include <iomanip>
using std::setw;

using namespace std;
void array_delcare_1();
void array_declare_2();
void array_delcare_3();
void array_declare_4();

int main()
{
	array_delcare_1();
	array_declare_2();
	array_delcare_3();
	array_declare_4();
	
}
void array_delcare_1() {
	cout << "array_delcare_1 pointer array \n" << endl;
	int size = 3; int i = 0;
	int* myarr = new int[size]; // myarr pointer of type int
	for (i	 = 0; i < size; i++)
		myarr[i] = 10;
	for (i = 0; i < size; i++)
		printf("myarr[%d] = %d \n", i, myarr[i]);
	delete[] myarr;
	cout << "\n" << endl;
}

void array_declare_2() {
	cout << "\n" << endl;
	cout << "array_declare_2 array is hardcoded" << endl;
	int arr[] = { 20,25,3,4,5,8};
	int n, result = 0;
	for (n = 0; n <= 5; n++) {
		result = result + arr[n];
	}
	cout << result << endl;
	cout << "\n" << endl;
}

void array_delcare_3() {
	cout << "\n" << endl;
	cout << "array_declare_3 loop start will store all numbers \n" << endl;
	int sum = 0; int i; int n[3];
	cout << "Enter three numbers : " << endl;
	for (i = 0; i < 3; i++) {
		cin >> n[i];
		sum += n[i];  // will add the number contiguous
		getchar();
	}
	cout << "value of sum of all numbers is " << sum << endl;
	cout << "\n" << endl;
	
	
}

void array_declare_4() {
	cout << "\n" << endl;
	int array[5];
	int n = 0; int p = 0;

	cout << sizeof(array) << endl;
	cout << sizeof(array[0]) << endl;

	// Initializing elements are array seperately 
	for (n = 0; n < sizeof(array) / sizeof(array[0]); n++) {
		array[n] = n+50;
	}
	
	// print header
	cout << "Element" << setw(10) << "Value" << endl;

	// print elelemts value in loop
	for (p = 0; p < sizeof(array) / sizeof(array[0]); p++) {
		cout << setw(5) << p << setw(10) << array[p] << endl;
	}
	getchar();
}