#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	do{
		cout<<"Enter a string: ";
		string str;
		cin>>str;
		int ch;
		cout<<"Select any option: "<<endl;
		cout<<"1. Insert a sub string into a given main string from a given position."<<endl;
		cout<<"2. Delete n characters from a given position in a given string."<<endl;
		cout<<"3. Press 0 to exit!"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				{
					int pos;
					string sub;
					cout<<"Enter the substring to be added: ";
					cin>>sub;
					cout<<"Enter the Position: ";
					cin>>pos;
					string out = addsub(str,sub,pos);
					cout<<out<<endl;
					break;
				}
			case 2:
				{
					int pos,n;
					cout<<"Enter the Position: ";
					cin>>pos;
					cout<<"Enter the value of n: ";
					cin>>n;
					string out = remsub(str,pos,n);
					cout<<out<<endl;
					break;
				}
			case 0:
				return 0;
				break;
			default:
				cout<<"Enter Correct Choice.."<<endl;
				break;
		}
	}while(1);
}					  
