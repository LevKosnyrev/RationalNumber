#include <iostream>
#include "RationalNumber.h"

using namespace std;



// 1 \\ 
//RationalNumber* create_arr(int n) {
//	RationalNumber* arr = new RationalNumber[n];
//	return arr;
//}
//
//void initialization_arr(RationalNumber arr[], int n) {
//	int a, b;
//
//	for (int i = 0; i < n; i++) {
//		cout << "Enter Numerator and Denominator: ";
//		cin >> a >> b;
//		arr[i].set(a, b);
//	}
//}
//	
//void output_arr(RationalNumber arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i].get_num() << " " << arr[i].get_den() << endl;
//	}
//}
//
//RationalNumber scal_mult(RationalNumber arr1[], RationalNumber arr2[], int N) {
//	RationalNumber scal;
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		scal.sum(arr1[i].mult(arr2[i]));
//	}
//	return scal;
//}
//
//void delete_arr(RationalNumber arr[]) {
//	delete[] arr;
//}



// 2 \\ 
//RationalNumber** create_arr_to_pointer(int n) {
//	RationalNumber** arr = new RationalNumber*[n];
//	for (int i = 0; i < n; i++) {
//		arr[i] = new RationalNumber;
//	}
//	return arr;
//}
//
//void initialization_arr_to_pointer(RationalNumber *arr[], int n) {
//	int a, b;
//
//	for (int i = 0; i < n; i++) {
//		cout << "Enter Numerator and Denominator: ";
//		cin >> a >> b;
//		arr[i]->set(a, b);
//	}
//}
//
//void output_arr(RationalNumber *arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i]->get_num() << " " << arr[i]->get_den() << endl;
//	}
//}
//
//RationalNumber scal_mult(RationalNumber *arr1[], RationalNumber *arr2[], int N) {
//	RationalNumber scal(0, 1);
//	for (int i = 0; i < N; i++) {
//		scal.sum(arr1[i]->mult(*arr2[i]));
//	}
//	return scal;
//}
//
//void delete_arr(RationalNumber *arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		delete arr[i];
//	}
//	delete[] *arr;
//}



// 3 \\ 
//RationalNumber scal_mult(RationalNumber arr1[], RationalNumber arr2[], int N) {
//	RationalNumber scal;
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		scal += (arr1[i] * (arr2[i]));
//	}
//	return scal;
//}


int main() {
	int N;
	cout << "Enter N: ";
	cin >> N;



	// 1 \\ 
	//RationalNumber* arr1 = create_arr(N);
	//RationalNumber* arr2 = create_arr(N);

	//initialization_arr(arr1, N);
	//initialization_arr(arr2, N);

	//RationalNumber value = scal_mult(arr1, arr2, N);

	//value.output();

	//delete_arr(arr1);
	//delete_arr(arr2);



	// 2 \\ 
	//RationalNumber** arr1 = create_arr_to_pointer(N);
	//RationalNumber** arr2 = create_arr_to_pointer(N);

	//initialization_arr_to_pointer(arr1, N);
	//initialization_arr_to_pointer(arr2, N);

	//output_arr(arr1, N);
	//output_arr(arr2, N);

	//RationalNumber value = scal_mult(arr1, arr2, N);

	//value.output();


	//delete_arr(arr1, N);
	//delete_arr(arr2, N);


	// 3 \\ 
	//RationalNumber* arr1 = create_arr(N);
	//RationalNumber* arr2 = create_arr(N);

	//initialization_arr(arr1, N);
	//initialization_arr(arr2, N);

	//output_arr(arr1, N);
	//output_arr(arr2, N);

	//RationalNumber arr3 = scal_mult(arr1, arr2, N);

	//cout << arr3;
	//delete_arr(arr1);
	//delete_arr(arr2);
}