// C++_Array_V1.cpp : Defines the entry point for the console application.
// Simple array 

#include"stdafx.h"
#include<iostream>
#include <cstdio>
#include <iomanip>
#include <string.h>
#include <stdio.h>

using std::setw;

using namespace std;
void array_delcare_1();
void array_declare_2();
void array_delcare_3();
void array_declare_4();
void array_declare_5();


int main()
{
	array_delcare_1();
	array_declare_2();
	array_delcare_3();
	array_declare_4();
	array_declare_5();  // Function for strcmp
	
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
}

void array_declare_5() {
	cout << "array_declare_5 function for strcmp - compare two strings" << endl;
	char s1[80];
	char s2[80];

	cout << "Enter s1 number \n" << endl;
	gets_s(s1);
	cout << "Enter s2 number \n" << endl;
	gets_s(s2);
	printf("length of s1 is %d and s2 is %d \n", strlen(s1), strlen(s2));
	if (!strcmp(s1, s2)) {
		printf("strings are equal \n");
		getchar();
	}

	else {
		printf("strings are not equal \n");
	}

	strcat_s(s1,s2);
	printf("concatenated results for two strings %s \n",s1);

	if (strchr(s1, 'e')) printf("e is in s1 string \n");
	if (strstr(s1, "hi")) printf("found hi \n");
	getchar();
}