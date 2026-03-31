/*
Ques→
A
A B
A B C
A B C D
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
        while (column<=row)
        {
                char ch='A'+column-1;
            cout<<ch<<" ";
            column+=1;
        }
        cout<<'\n';
        row+=1;
    }
    
}