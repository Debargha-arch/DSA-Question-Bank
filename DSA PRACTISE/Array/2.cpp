#include<iostream>
using namespace std;

struct Pair{
	int min;
	int max;
};

struct Pair getMinMax(int a[],int n){
	struct Pair m;
	m.min=a[0];
	m.max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<m.min){
			m.min=a[i];
		}
		else if(a[i]>m.max){
			m.max=a[i];
		}
	}
	return m;
}

void printMinMax(struct Pair m){
	cout<<"Minimum:"<<m.min<<"\nMaximum:"<<m.max;
}

int main(){
	struct Pair m;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	m=getMinMax(a,n);
	printMinMax(m);
}
