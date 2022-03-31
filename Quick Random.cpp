#include <iostream>
#include<cstdlib>
using namespace std;

int divide(int arr[], int low, int high)
{
	int r = low + rand() % (high - low);
	swap(arr[r], arr[high]);
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);	
}

void sort(int arr[], int low, int high)
{
	if (low < high) {
		int position =divide(arr, low, high);
		sort(arr, low, position - 1);
		sort(arr, position + 1, high);
	}
}

int main()
{
	int n=50;
	int arr[n]={...}; // initialise the array with the 50.txt
	sort(arr, 0, n - 1);
	printf("Sorted array: \n");
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
}
