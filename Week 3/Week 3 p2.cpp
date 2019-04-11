#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==0) return 1;
	else return(n*fact(n-1));
}
int main(){
	cout<<"To calculate: 1- x^2/2! + x^4/4! - x^6/6! + x^8/8! - x^10/10!"<<endl;
	int x;
	cout<<"Enter x: ";
	cin>>x;
	cout<<1-(pow(x,2)/fact(2))+(pow(x,4)/fact(4))-(pow(x,6)/fact(6))+(pow(x,8)/fact(8))-(pow(x,10)/fact(10));
}
