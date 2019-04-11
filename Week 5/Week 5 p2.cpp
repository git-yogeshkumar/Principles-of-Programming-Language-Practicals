#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	string str,revstr;
	cout<<"Enter a String: ";
	cin>>str;
	for(int i=str.length()-1;i>=0;i--) revstr+=str[i];
	if(str==revstr) cout<<"Is a Pallindrome!";
	else cout<<"Is not a Pallindrome!";
}

