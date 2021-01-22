//keep track of 0s and 1s
// in case of 0 again intilize count to 0, else count++

#include<iostream>
#include<cmath>
using namespace std;

int maxOnes(int arr[], int n){
	int res=0;
	int count =0;
	for(int i=0;i<n;i++){
		
		if(arr[i]==0){
        count=0;
		}
		else{
			count++;
			res=max(res,count);
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
	
	cout<<maxOnes(arr,n);
	
	return 0;
}
