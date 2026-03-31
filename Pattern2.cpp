#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int row =1;
    char count ='A';
    while (row<=n)
    {
        int column = n-row;
        while (column<=row){
            cout<<count<<" ";
            count+=1;
            column+=1;
        }
    cout<<'\n';
    row+=1;
    }
}