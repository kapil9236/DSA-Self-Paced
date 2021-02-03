//When mid is element we looking for , check left elemet to it 

#include<iostream>
using namespace std;

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


int main(){
	
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}
int x;
cin>>x;
cout<<"Element "<<x<<" appears first time at index "<<firstOccurance(arr,n,x);

	
return 0;
}
