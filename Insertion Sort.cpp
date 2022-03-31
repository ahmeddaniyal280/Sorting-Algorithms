#include<iostream>
using namespace std;
int main()
{
	int n=50;
	int arr[n]={...}; // initialise the array by the 50.txt
	
	int temp;
	
	for(int i=0;i<n;i++)
	{
		temp=arr[i];
		int j=i-1;
		while(j>=0 &&temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"\n";
	cout<<"After sorting : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
}
