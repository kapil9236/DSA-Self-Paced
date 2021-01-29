#include<iostream>
using namespace std;

int bSearch(int arr[],int low,int high, int x){
	
	if(low>high)
	return -1;
		int mid=(low+high)/2;
		
		if(arr[mid]==x)
		return mid;
		
		else if(arr[mid]>x)
		return bSearch(arr,low,mid-1,x);
		
		else 
		return bSearch(arr,mid+1,high,x);
	}



int main(){
	 int n;
	 int x;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++){
	 	cin>>arr[i];
	 }
	 cout<<" enter the element to be searched "<<endl;
	 cin>>x;
	 
	 
	 cout<<	 bSearch(arr,0,n-1,x);

	 
	 return 0;
}
