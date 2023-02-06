#include<iostream>
using namespace std; 
void bubblesort(int n, int arr[]){
	for(int i=0; i<n; i++){
		for(int j = 1; j<n-i; j++){
			if(arr[j]>arr[j+1])
			swap(arr[j], arr[j+1]); 
		}
	}
}
int main(){
	int n, result; 
	cout<<"Enter the number of array you want to create"<<endl; 
	cin>>n; 
	int arr[n];
	// to create the desired array you want to sort 
	for(int i=1; i<=n;i++){
		cout<<i<<"."<<"element: ";
		cin>>arr[i]; 
	}
	bubblesort(n,arr);
	// displaying the result sorted array
	cout<<"The sorted array are:"<<endl; 
		for(int i= 1; i<=n ;i++){
		cout<<arr[i]<<" "; 
	}
}
