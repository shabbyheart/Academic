#include<bits/stdc++.h>
using namespace std;

class Linear_interpolation
{
public:

    double fx(double xx)
    {
        return sqrt(xx);
    }
    void calculation(double x)
    {
        double x1 = x - .5, x2 = x + .5 ;
        double ans = fx(x1) + ( ((x-x1) * ( fx(x2) - fx(x1)))/ (x2 - x1));
        cout<<ans;
    }
};

int main()
{
    Linear_interpolation ob;
    double x;
    cin>>x;
    ob.calculation(x);
}
