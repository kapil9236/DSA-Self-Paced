//error in function?

#include<iostream>
using namespace std;

int second(int arr[],int n){
	int largest=0;
	int res=-1;
	
	for(int i=0;i<n;i++){
		if(arr[i]>arr[largest]){
			res=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest]){
			if(res==-1 || arr[i]>arr[res])
			res=i;
		}
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	second(arr,n);
	cout<<"Second largest element is at index "<<second(arr,n)<<" and value is "<<arr[second(arr,n)];
	
	return 0;
}
