//find the first occurance 
// result = n-first occurance

#include<iostream>
using namespace std;

int count1s(int arr[], int n){
	int low, high;
	low=0;
	high=n-1;
	 while(low<=high){
	  int mid=(low+high)/2;
	  
	  
	  if(arr[mid]<1){
	  	low=mid+1;
	  }
	  else{
	  	if(mid==0 || arr[mid-1]==0)
	  	return n-mid;
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
 cout<<count1s(arr,n);

	
return 0;
}
