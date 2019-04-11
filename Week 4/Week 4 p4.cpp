#include <iostream>
using namespace std;

#define inp(ar, s) for(int i=0; i<s; ++i) cin >> ar[i]

int main(){
	int n1,n2;
	cout << "Enter size of Array 1: ";
	cin >> n1;
	
	cout << "Enter size of Array 2: ";
	cin >> n2;
	
	int a[n1], b[n2], c[n1+n2];
	
	cout << "Enter elements of Array 1 in sorted order: ";
	inp(a,n1);
	
	cout << "Enter elements of Array 2 in sorted order: ";
	inp(b,n2);
	
	int ai=0,bi=0,ci=0;
	
	while(ci<n1+n2){
		
		if(ai<n1 && bi <n2) {
			if(a[ai] <b[bi]){
				c[ci]= a[ai];
				ai++;
			}
			else {
				c[ci] = b[bi];
				bi++;
			}
		}
		
		else if(ai==n1){
			c[ci]=b[bi];
			bi++;
		}
		
		else {
			c[ci]= a[ai];
			ai++;
		}
		ci++;
		
	}
	
	cout << "Merged Array in sorted form is: \n";
	for(int i=0; i<ci; ++i) cout << c[i] << " ";
}
