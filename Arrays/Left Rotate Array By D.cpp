#include<iostream>
using namespace std;
	int n;


void reverse(int arr[], int low, int high){
   while(low<high){
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}

// infirst time didn't input d as parameter in LRotateD
void LRotateD(int arr[],int d,int n){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);

	}



int main(){
	int d;
	cin>>n;
	
	cout<<" enter the no of places by which you want to left rotate "<<endl;
	cin>>d;
	
	int arr[n];
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	
	LRotateD(arr,d,n);
	cout<<" rotated array is "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	
	
	return 0;
}
