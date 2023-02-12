#include<iostream>
#include<conio.h>
using namespace std;
void display(float matrix[][10],int, int);
void rowreduce(float matrix[][10],int,int );
int main() {
	int n,columns; // n is row and columns is number of columns
	cout<<"Enter the type of matrix you want to create i.e n*m"<<endl; 
	cin>>n>>columns; 
	float matrix[10][10];
	for(int i=0; i<n; i++){
		for(int j=0; j<columns; j++){
			cout<<i+1<<"*"<<j+1<<"Matrix = : "; 
			cin>>matrix[i][j];
		}
	}
	rowreduce(matrix,n,columns);
	getch();
	return 0;
}

void display(float matrix[][10],int n,int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<" "<<matrix[i][j]<<"\t";
		}
		cout<<endl; 
	}
	cout<<endl; 
}

void rowreduce(float matrix[][10], int n, int m){
	int count = 0; // we are using count to iterate through every row and making them into row reduced form 
	while(count<n){
		float pivot,mult; 
		for(int i =0; i<n; i++){
			if(i!=count){
				pivot = matrix[count][count]; // I am simply assigning the i ==j elements into pivot variable
				mult =matrix[i][count]/matrix[count][count]; // dividing i!=j element by i==j element
				for(int j =0; j<m; j++){
					if(i==count)// which is also i==j that is all pivot elements 
						matrix[i][j] = matrix[i][j]/pivot; // making pivot element 1
					else
						matrix[i][j] = matrix[i][j] - matrix[count][j]*mult; // making non-pivot element zero
				}
			}
		}
		count ++;
		display(matrix,n,m);
	}

}

