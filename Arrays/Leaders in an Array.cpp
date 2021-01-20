//an element is a leader if no larger element present right side of it.
// it will print leaders from the end, to get from start to end we can just reverse it

#include<iostream>
using namespace std;

void leaders(int arr[], int n){
	int current_leader=arr[n-1];
	cout<<current_leader;
	
	for(int i=n-2;i>=0;i--){
		if(arr[i]>current_leader){
		
		current_leader=arr[i];
		cout<<arr[i];
	}
	}
}



int main(){
	int n;
	cin>>n;
	

	
	int arr[n];
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	
	leaders(arr,n);
	
	
	
	return 0;
}
