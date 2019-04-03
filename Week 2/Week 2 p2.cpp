#include<bits/stdc++.h>
#define ll long long int
#define f(i,n,a) for(long long int i=a; i<n; i++)
using namespace std;
int main(){
	ll n;
	cout<<"Enter value of n : ";
	cin>>n;
	ll a=0, b=1;
	cout<<a<<" "<<b<<" ";
	f(i,n-2,0){
		ll tmp=a;
		a=b;
		b=a+tmp;
		cout<<b<<" ";
	}
}
