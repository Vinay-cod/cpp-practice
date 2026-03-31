#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
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
            int num=1;
            while (num<=n-row+1)
        {
                cout<<row;
                num+=1;
        }
            cout<<'\n';
            row+=1;
    }
}/*
1111
 222
  33
   4*/