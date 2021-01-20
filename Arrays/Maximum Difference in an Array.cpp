//keep track of minimum value so far
// comapare the differences and update difference and minVal

#include<iostream>
using namespace std;

int maxDiff(int arr[],int n){
	int res=arr[1]-arr[0],minVal=arr[0];
	
	for(int i=0;i<n;i++){
		res=max(res,arr[i]-minVal);
		minVal=min(minVal,arr[i]);
	}
	return res;
}



int main(){
	int n;
	cin>>n;
	

	
	int arr[n];
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	
	maxDiff(arr,n);
	cout<<"maximum difference is "<<maxDiff(arr,n);
	
	
	return 0;
}
