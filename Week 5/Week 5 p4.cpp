#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	cout<<"Enter a line of text: ";
	string txt;
	getline(cin,txt);
	cout<<txt<<endl;
	cout<<"Enter a word: ";
	string wrd;
	cin>>wrd;
	int cnt=0;
	int freq=txt.find(wrd);
	if(freq==string::npos){
		cout<<0;
		return 0;
	}
	else{
		while(freq!=string::npos){
			freq=txt.find(wrd,freq+1);
			cnt++;
		}
	}
	cout<<cnt;
}					  
