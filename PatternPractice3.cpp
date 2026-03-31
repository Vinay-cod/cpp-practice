/* 
Ques→
****
 ***
  **
   *
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
        int space=1;
        while (space<=row-1)
        {
            cout<<" ";
            space+=1;
        }
        int star=1;
        while (star<=n-row+1)
        {
            cout<<"*";
            star+=1;
        }
        cout<<'\n';
        row+=1;
    }
    
}