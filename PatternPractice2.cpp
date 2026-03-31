/*
   *
  **
 ***
****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int space = 1;
        while (space<=n-row)
        {
            cout<<" ";
            space+=1;
        }
        int star = 1;
        while (star<=row)
        {
            cout<<"*";
            star+=1;
        }
        cout<<'\n';
        row+=1;
        
    }
    
}