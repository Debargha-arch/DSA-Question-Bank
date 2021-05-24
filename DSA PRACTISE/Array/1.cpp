#include<iostream>
using namespace std;

//Iterative reverse function
/*
void reverse(int a[],int n){
	for(int i=0;i<n/2;i++){
		int t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	
}
*/
//Recursive reverse function
void reverse(int a[],int start,int end){
	if(start>=end) return;
	int t=a[start];
	a[start]=a[end];
	a[end]=t;
	reverse(a,start+1,end-1);
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nReversed Array:\n";
	//reverse(a,n);
	reverse(a,0,n-1);
	print(a,n);
}


