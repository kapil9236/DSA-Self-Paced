// bubble sort algorithm
// Insertion Sort
#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
	   int min=0;  //index with minimum value 
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
		if (arr[j]<arr[min]){
			int temp=arr[min];
			arr[min]=arr[j];
			arr[j]=temp;
		}
		
		
		}
	}
	
	
}

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	InsertionSort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
