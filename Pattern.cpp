#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int column=1;
        while (column<=n)
        {
            int star=n-row+1;
            while (star<=n-row+1)
            {
                cout<<"*";
                star-=1;
            }
            
        column+=1;
        }
    cout<<'\n';
    row+=1;
    }
}