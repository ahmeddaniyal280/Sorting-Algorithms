#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void qsort(int arr[],int n,int low,int high)
{
	int i,j;
	i=low;
	j=high;
	int mid;
	sort(arr,arr+n);
	if(n%2!=0)
	{
		mid=arr[n/2];
	}
	else{
		mid=(arr[(n-1)/2]+arr[n/2]);	
	}
	while (i<=j){
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
        qsort(arr,n,low, j);
	if (i<high)
        qsort(arr,n, i, high);
}

int main()
{
	int n=50;
	int arr[n]={...}; // initialise the array with the 50.txt
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
	qsort(arr,n, 0, n - 1);
	cout<<"sorted : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}	
}
