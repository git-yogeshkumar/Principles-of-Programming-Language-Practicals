#include<bits/stdc++.h>
#define ld long double
using namespace std;
int main(){
	ld cp,sp;
	cout<<"Enter the Cost Price : ";
	cin>>cp;
	cout<<"Enter the Selling Price : ";
	cin>>sp;
	if(cp>sp) cout<<((cp-sp)/cp)*100<<"% "<<"LOSS"<<endl;
	else if(sp>cp) cout<<((sp-cp)/cp)*100<<" % "<<"PROFIT"<<endl;
	else cout<<"NO Profit or LOSS"<<endl;
}
