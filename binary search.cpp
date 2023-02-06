#include<iostream>
using namespace std; 

int BinarySearch(int num, int n,int arr[]){
	int start =0; 
	int end = n-1; 
	int mid = (start+end)/2;
		while(start<=end){
		 if (arr[mid]==num){
		 	return mid; 
		 }

		if(num>arr[mid]){
			start = mid+1; 
		}
			else{
				end=mid-1;
			}
			mid = (start+end)/2;
		}
		return -1; 
		
	}
	

int main(){
	int num, result; 
	cout<<"Enter the number you want to find out from array you provided: "; 
	cin>>num; 
	int arr[]={1,2,3,4,5,6,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	result = BinarySearch(num,n,arr); 
	cout<<"The position of element in array is "<<result<<endl;
	
	
}
