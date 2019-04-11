#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout << "Enter the number of lines to print: ";
    cin >> x;
    int z=1;
    while(x--){
    	for(int i=1;i<=z;++i){
    		cout << i << " ";
		}
		z++;
		cout <<endl;
	}
}
