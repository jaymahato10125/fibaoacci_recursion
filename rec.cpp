#include<iostream>   //fibaoacci series using recursion
using namespace std;

int fibaoacci(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2){
        return 1;
    }
    else
    {
        return fibaoacci(n-1)+fibaoacci(n-2);
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The foctorial  is: "<<fibaoacci(n)<<endl;
}