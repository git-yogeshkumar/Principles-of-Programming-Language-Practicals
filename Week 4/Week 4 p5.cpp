    
#include <iostream>
using namespace std;

#define in(ar, s) for(int i=0; i<s; ++i) cin >> ar[i]

int main(){
	int n, num, count=0;
	cout << "Enter size of Array: ";
	cin >> n;
	int a[n];
	
	cout << "Enter elements of array: ";
	in(a,n);
	
	cout << "Enter number to search: ";
	cin >> num;
	
	for(int i=0; i<n;++i){
		if(a[i]==num) count++;
	}
	
	cout << "Number " << num << " appeared " << count << " times!";
}
