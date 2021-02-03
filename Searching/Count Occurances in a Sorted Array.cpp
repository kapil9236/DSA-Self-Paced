// find first occurance and last occurance
// result will be l-F+1

#include<iostream>
using namespace std;

// firstOccurance Function
int firstOccurance(int arr[], int n, int x){
	int low, high;
	low=0;
	high=n-1;
	 while(low<=high){
	  int mid=(low+high)/2;
	  
	  if(arr[mid]>x){
	  	high=mid-1;
	  }
	  else if(arr[mid]<x){
	  	low=mid+1;
	  }
	  else{
	  	if(mid==0 || arr[mid-1]!=arr[mid])
	  	return mid;
	  	else 
	  	high=mid-1;
	  }
	 	
	 }
	 return -1;
}
// lastOccurance Function
int lastOccurance(int arr[], int n, int x){
	int low, high;
	low=0;
	high=n-1;
	 while(low<=high){
	  int mid=(low+high)/2;
	  
	  if(arr[mid]>x){
	  	high=mid-1;
	  }
	  else if(arr[mid]<x){
	  	low=mid+1;
	  }
	  else{
	  	if(mid==n || arr[mid+1]!=arr[mid])
	  	return mid;
	  	else 
	  	low=mid+1;
	  }
	 	
	 }
	 return -1;
}

// countOccurance Function

int countOccurances(int arr[], int n, int x){
	int first=firstOccurance(arr,n,x);
	if(first==-1)
	return -1;
	else 
	return (lastOccurance(arr,n,x)-firstOccurance(arr,n,x)+1);
}

int main(){
	
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}
int x;
cin>>x;

cout<<"Element "<<x<<" appears first time at index : "<<firstOccurance(arr,n,x)<<endl;
cout<<"Element "<<x<<" appears last time at index : "<<lastOccurance(arr,n,x)<<endl;

cout<<"No of Occurances : "<<countOccurances(arr,n,x);


	
	return 0;
}
