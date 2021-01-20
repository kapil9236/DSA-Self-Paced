//swap the elements 
// maintain low and high 

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int low=0;
	int high =n-1;
	while(low<high){
		int temp;
		temp=arr[low];
		arr[low]=arr[high];
		arr[high] =temp;
		low++;
		high--;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
