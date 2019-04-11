#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	string str,res,fs,rep;
	cout<<"Enter a string: ";
	cin>>str;
	cout<<"Enter string to find: ";
	cin>>fs;
	cout<<"Enter string to replace: ";
	cin>>rep;
	int f = str.find(fs);
	if(f==string::npos){
		cout<<"Substring not found can't replace!";
		return 0;
	}
	else{
		int a=f+fs.length();
		res = str.substr(0,f)+rep+str.substr(a,str.length()-1);
	}
	cout<<res;
}
