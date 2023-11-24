#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int iMin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[iMin])
				iMin = j;
		}

		if (iMin != i)
		{
			swap(arr[i], arr[iMin]);
		}
	}

}

int main()
{
	int arr[] = { 1, 10, 5, 6, 7, 8, 15 };
	print(arr, 7);
	selectionSort(arr, 7);
	print(arr, 7);
}