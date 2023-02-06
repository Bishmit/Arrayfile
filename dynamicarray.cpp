#include<iostream>
using namespace std; 
int main(){
	int num; 
	cout<<"Enter the no of array you want to create: ";
	cin>>num; 
	int *myarray = new int[num];
	for(int i = 0; i<num; i++){
		cout<<"Enter the "<<i+1<<"array: ";
		cin>>myarray[i]; 
	}
	cout<<"\nThe dynamicaly created array is"<<endl; 
	for(int i = 0; i<num; i++){
		cout<<myarray[i]<<"  "; 
	}
}

