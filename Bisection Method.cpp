
/// input -25 -1 ans -1.7416
#include<bits/stdc++.h>
using namespace std;
#define E 0.0001
double f( double x)
{
    return (x*x-4*x-10);
}

int main()
{

    int i = 1;
    double xl, mid, xu;
    cin>>xl>>xu;
    if( (f(xl) * f(xu)) < 0)
    {
        do{
            mid = (xl + xu) / 2.0;
            cout<<"Iteration = "<<i++<<" mid value is: "<<mid<<" Function value is: "<<f(mid)<<endl;
            if( f(mid) == 0)
            {
                cout<<"Root is ..................-> "<<mid;
                return 0;
            }
            else if( (f(xl) * f(mid)) <0)
                xu = mid;
            else
                xl = mid;


        }while( fabs( f(mid )) >= E);
        cout<<"The Root is : "<<mid<<endl;
    }
    else
    {
        cout<<"Root is Not in this interval ";
    }
}

