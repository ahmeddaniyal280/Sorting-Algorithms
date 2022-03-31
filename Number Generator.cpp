#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void fun(int *arr,int numbers){
	srand(static_cast<int>(time(0)));
	int var=0;
	int value;
	int j;
	for(int i=0;i<numbers;i++){
		value=1+ rand()% 2000;
		for( j=0;j<i;j++){
			if(value==arr[j]){
				break;
				
			}
		}
		if(j==i){
			arr[i]=value;
		}
		else{
			i--;
		}
		
	}
}

main(){
	int arr[1000];
	fun(arr,1000);
	for(int i=0;i<1000;i++){
		cout<<arr[i]<<"  ";
	}
}
