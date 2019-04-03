#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll num,sum=0;
	cout<<"Enter a Number : ";
	cin>>num;
	while(num>0){
		int r = num%10;
		sum+=r;
		num/=10;
	}
	cout<<"Sum of Digits is : "<<sum<<endl;
}
