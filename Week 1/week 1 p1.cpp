#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll tc;
	cout<<"Enter the No of Test Cases : ";
	cin>>tc;
	while(tc--){
		ll num;
		bool res;
		cout<<"Enter a Number = ";
		cin>>num;
		num%2==0? cout<<"IS EVEN"<<endl : cout<<"IS ODD"<<endl;
	}
	return 0;
}
