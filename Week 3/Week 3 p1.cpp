#include <bits/stdc++.h>
using std::cin;
using std::cout;

int main(){
	int a, b;
	char c;
	cout << "Input two numbers: ";
	cin >> a>>b;
	cout<<"Input the Operation: ";
	cin>>c;
	cout << "Result is: ";
	switch(c){
		case '+':
			cout << a+b;
			break;
		case '/':
			cout << a/b;
			break;
		case '*':
			cout << a*b;
			break;
		case '-':
			cout << a-b;
			break;
		case '%':
			cout << a%b;
			break;
	}
	
	return 0;
}
