#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x[100], fx[1000], sum = 0,value;
    int n,i,j;
    cout<<"Enter the Number of sample value";
    cin>>n;
    cout<<"Enter all value of x"<<endl;
    for( i = 0; i<n; i++)
    {
        cin>>x[i];
    }
    cout<<"Enter all corresponding X functional value "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>fx[i];
    }
    cout<<"Enter value for calculation"<<endl;
    //int value;
    cin>>value;
    for( i = 0; i < n; i++)
    {
        double  lx=1,lxx=1;
        for( j = 0; j < n; j++)
        {
            if( j != i)
            {
                lx  *= value-x[j] ;
                lxx *0=  x[i]-x[j] ;
            }
        }

        sum += (lx/lxx) * fx[i];

    }
    cout<<"The estimated value of f(x) = " <<sum;
    return 0;
}

