#include<iostream>
using namespace std;
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int divide(int arr[], int low, int high) {
	int mid1;
	int mid2 = (low + high) / 2;
	if (arr[mid2] < arr[low]) 
	{
		swap(&arr[mid2], &arr[low]);
    }
	if (arr[high] < arr[low])
	{
		swap(&arr[high], &arr[low]);
    }
	if (arr[high] < arr[mid2])
	{
		swap(&arr[high], &arr[mid2]);
	}
	swap(&arr[mid2], &arr[high-1]);
	mid1 = arr[high-1];
	mid1 = arr[high];
	int i = (low - 1);
	for (int j = low; j < high; j++) {
		if (arr[j] < mid1) {
		swap(&arr[++i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void sort(int arr[], int low, int high) {	
	if (low < high) {
		int position = divide(arr, low, high);
		sort(arr, low, position - 1);
		sort(arr, position + 1, high);
	}
}

int main() {
	int n=50;
	int arr[n]={...}; // initialise the array with the 50.txt
	sort(arr, 0, n - 1);
	cout<<"sorted : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}	
}
