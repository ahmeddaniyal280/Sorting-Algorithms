#include<iostream>
using namespace std;

void sort(int arr[], int low, int high) {
	int i,j;
	i=low;
	j=high;
	int mid = arr[(low+high)/2];
	while (i<=j) {
	    while (arr[i]<mid)
	    	i++;
	    while (arr[j]>mid)
        	j--;
	    if (i<=j) {
	    	int hold = arr[i];
            arr[i] = arr[j];
            arr[j] = hold;
            i++;
            j--;
	    }
	}	 
	if (low<j)
	    sort(arr,low, j);
	if (i<high)
		sort(arr, i, high);	
}

main()
{
	int n=50;
	int arr[n]={...}; // initialise the array with the 50.txt
	
	sort(arr, 0, n - 1);
	cout<<"After Sorting: ";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
}
