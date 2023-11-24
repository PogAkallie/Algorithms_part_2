#include <iostream>
using namespace std;

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(int arr[], int start, int middle, int end) {
	

	int i = 0, j = 0, k = start;
	while (i < middle, j < end - middle) 
	{
		k++; 
	}
	
}

void mergesort(int arr[], int l, int r)
{
    if (l < r) 
    {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r); //merging the 2 arrays
    }
}
