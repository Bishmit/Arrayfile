#include<iostream>
using namespace std; 
int linearsearch(int num, int n,int arr[]){
	for(int i=0; i<n; i++){
		if(arr[i]==num)
		return i; 
	}
}

int main(){
	int num, result; 
	cout<<"Enter the number you want to find out from array you provided: "; 
	cin>>num; 
	int arr[]={4,3,2,8,7,1,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	result = linearsearch(num,n,arr); 
	cout<<"The position of element in array is "<<result<<endl;
	
	
}
