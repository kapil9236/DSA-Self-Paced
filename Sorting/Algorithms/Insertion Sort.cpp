// Insertion Sort

#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
	  
	  for(int i=1; i<n;i++){
	  	
	  	int key =arr[i];
	  	int j=i-1;
	  	while(j>=0 && arr[j]>key)  // no = sign in 2nd expression for stability 
		  {
	  		arr[j+1]=arr[j];
	  		j--;
		  }
		arr[j+1]=key;
		    
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
