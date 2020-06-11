// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void SelectionSort(int M[], int n);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int M[50];
	NhapMang(M, n);
	cout << "Mang sau khi nhap: \n";
	XuatMang(M, n);
	SelectionSort(M, n);
	cout << "\nMang sau khi sap xep: \n";
	XuatMang(M, n);
	return 0;
}

void NhapMang(int M[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		M[i] = -50 + rand() % 100;
	}
}

void XuatMang(int M[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << M[i] << "\t";
	}
}

void SelectionSort(int M[], int n)
{
	//int min;
	int max;
	for (int i = 0; i < n - 1; i++)
	{
		//min = i;
		max = i;
		for (int j = i + 1; j < n; j++)
		{
			/*if (M[j] < M[min])
				min = j;*/
			if (M[j] > M[max])
				max = j;
		}
		/*if (i != min)
		{
			int temp = M[i];
			M[i] = M[min];
			M[min] = temp;
		}*/
		if (i != max)
		{
			int temp = M[i];
			M[i] = M[max];
			M[max] = temp;
		}
	}
}
