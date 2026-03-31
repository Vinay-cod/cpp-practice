/*
Ques→
    ****
    *  *
    *  *
    ****
*/
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
            if (row==1||row==n||column==1||column==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            column+=1;            
        }
        cout<<'\n';
        row+=1;
    }
    
}