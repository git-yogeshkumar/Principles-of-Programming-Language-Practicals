#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
using namespace std;
int main(){
	cout<<"Enter size of array: ";
	int n;
	cin>>n;
	int arr[n];
	vi pos; vi neg; vi odd; vi even;
	f(i,0,n){
		cin>>arr[i];
		int tmp=arr[i];
		if(arr[i]>0 && arr[i]%2==0){
			pos.pb(tmp);
			even.pb(tmp);
		}
		else if(arr[i]>0 && arr[i]%2!=0){
			pos.pb(tmp);
			odd.pb(tmp);
		}
		else if(arr[i]<0 && arr[i]%2==0){
			neg.pb(tmp);
			even.pb(tmp);
		}
		else if(arr[i]<0 && arr[i]%2!=0){
			neg.pb(tmp);
			odd.pb(tmp);
		}
	}
	cout<<"There are "<<pos.size()<<" Positive Numbers in the array: "<<endl;
	f(i,0,pos.size()) cout<<pos[i]<<" ";
	cout<<endl;
	cout<<"There are "<<neg.size()<<" Negative Numbers in the array: "<<endl;
	f(i,0,neg.size()) cout<<neg[i]<<" ";
	cout<<endl;
	cout<<"There are "<<even.size()<<" Even Numbers in the array: "<<endl;
	f(i,0,even.size()) cout<<even[i]<<" ";
	cout<<endl;
	cout<<"There are "<<odd.size()<<" Odd Numbers in the array: "<<endl;
	f(i,0,odd.size()) cout<<odd[i]<<" ";
	cout<<endl;
}
