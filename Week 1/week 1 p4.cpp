#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,flg=0;
	do{
		cout<<"Enter Number : ";
		cin>>n;
		if(n>99 && n<1000){
			while(n){
				int r = n%10;
				sum+=r;
				n=n/10;
			}
			cout<<"Sum of Digits is : "<<sum;
			flg=0;
		}
		else{
			flg=1;
			cout<<"Enter a 3 digit Number!"<<endl;
		}
	}while(flg);
}
