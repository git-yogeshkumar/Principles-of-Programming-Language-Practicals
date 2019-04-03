#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool chkprime(ll n){
	if(n<=1) return false;
	if(n==2 || n==3) return true;
	if(n%2==0 || n%3 == 0) return false;
	for(ll i=5;i<=pow(n,0.5);i+=6){
		if(n%i==0 || n%(i+2) == 0) return false;
	}
	return true;
}
int main(){
	ll n;
	cout<<"Enter value of n : ";
	cin>>n;
	for(ll i=1;i<=n;i++){
		if(chkprime(i)==true) cout<<i<<" ";
	}
}
