#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,digits=0,sum=0;
    cout << "Enter the number: ";
    cin >> x;
    
    int temp =x;
    while(x){
        x /= 10;
        digits++;
    }
    
    x=temp;
    
    while(temp){
        int rem= temp%10;
        sum += std::pow(rem, digits);
        temp/=10;
    }
    
    if(sum==x) cout << "Armstrong Number!";
    else cout << "Not an Armstrong Number :(";
    
}
