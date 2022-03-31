#include<iostream>
using namespace std;
void merge(int arr[],int p,int q,int r)
{
	int s1=q-p+1;
	int s2=r-q;
	int subarray1[s1];
	int subarray2[s2];
	for(int i=0;i<s1;i++)
	{
		subarray1[i]=arr[p+i];
	}
	for(int j=0;j<s2;j++)
	{
		subarray2[j]=arr[q+1+j];
	}
	int m,n,o;
	m=0;
	n=0;
	o=p;
	while(m<s1 && n<s2)
	{
		if(subarray1[m]<=subarray2[n])
		{
			arr[o]=subarray1[m];
			m++;
		}
		else{
			arr[o]=subarray2[n];
			n++;
		}
		o++;
	}
	while(m<s1)
	{
		arr[o]=subarray1[m];
		m++;
		o++;
	}
	while(n<s2)
	{
		arr[o]=subarray2[n];
		n++;
		o++;
		
	}
}
void sort(int arr[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		sort(arr,p,q);
		sort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}
int main()
{
	int n=50;
	int arr[n]={...}; // initialise the array with the 50.txt
	cout<<"\n"<<endl;
	sort(arr,0,n-1);
	cout<<"After Sorting: ";
	for(int j=0;j<n;j++)
	{
		cout<<"\t"<<arr[j];
	}
	
}

