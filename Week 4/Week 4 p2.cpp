#include<bits/stdc++.h>
using namespace std;
#define f(i,a,n) for(int i=a;i<n;i++)
int main(){
	cout<<"Enter the value of m and n for MxN Matrix 1: ";
	int m1,n1,m2,n2;
	cin>>m1>>n1;
	int mat1[m1][n1];
	cout<<"Enter data of Matrix 1: "<<endl;
	f(i,0,m1){
		f(j,0,n1) cin>>mat1[i][j];
	}
	cout<<"Enter the value of m and n for MxN Matrix 2: ";
	cin>>m2>>n2;
	int mat2[m2][n2];
	cout<<"Enter data of Matrix 2: "<<endl;
	f(i,0,m1){
		f(j,0,n1) cin>>mat2[i][j];
	}
	int add[m1][n1];
	int mul[m1][n2];
	cout<<"Select the Operation- "<<endl;
	cout<<"1. Addition of Matrices."<<endl<<"2. Multiplication of Matrices."<<endl;
	cout<<"Your Choice: ";
	int ch;
	cin>>ch;
	switch(ch){
		case 1:
			if(m1==m2 && n1==n2){
				f(i,0,m1){
					f(j,0,n1) add[i][j]=mat1[i][j]+mat2[i][j];
				}
				cout<<"Addition of Matrices is: "<<endl;
				f(i,0,m1){
					f(j,0,n1) cout<<add[i][j]<<" ";
					cout<<endl;
				}	
			}
			else cout<<"Dimension of Matrices are Not same.";
			break;
		case 2:
			if(n1==m2){
				f(i,0,m1){
					f(j,0,n2){
						mul[i][j]=0;
						f(k,0,m1) mul[i][j]+=mat1[i][k]*mat2[k][j];
					}
				}
				cout<<"Multiplication of Matrices is: "<<endl;
				f(i,0,m1){
					f(j,0,n1) cout<<mul[i][j]<<" ";
					cout<<endl;
				}
			}
			else cout<<"Multiplication not possible";
			break;
	}
	
}
