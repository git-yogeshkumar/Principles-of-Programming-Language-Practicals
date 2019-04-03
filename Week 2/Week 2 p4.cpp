#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cout<<"Enter no of test cases : ";
	cin>>tc;
	while(tc--){
		char ch;
		cout<<"Press any Character : ";
		cin>>ch;
		if(ch>=65 && ch<=90) cout<<"Capital Letter"<<endl;
		else if(ch>=97 && ch<=122) cout<<"Small Letter"<<endl;
		else if(ch>=48 && ch<=57) cout<<"A Digit"<<endl;
		else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127)) cout<<"Special Character"<<endl;
		}
	}
