#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	int size,f,s;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Input array data: ";
	f(i,0,size) cin>>arr[i];
	if(size<2){
		cout<<"Invalid Input!";
		return 0;
	}
	f=s=INT_MIN;
	f(i,0,size){
		if(arr[i]>f){
			s=f;
			f=arr[i];
		}
		else if(arr[i] > s && arr[i] != f) s=arr[i];
	}
	if (s==INT_MIN) cout<<"There is No Second Largest Element"; 
    else cout<<"Second Largest Element is "<<s; 
}
