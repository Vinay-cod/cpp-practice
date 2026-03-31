#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int i=2;
    bool isPrime=true;
    while (i<n)
    {
        if (n%i==0)
        {
            isPrime=false;
            break;
        }
    i+=1;
    }
    if (isPrime && i>1)
    {
        cout<<"Is Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
}
