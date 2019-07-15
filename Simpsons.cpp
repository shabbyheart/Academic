/// 0 1 6
#include<bits/stdc++.h>
using namespace std;
double a,b;
int n;
class Trapezoidal{
public:

    double fx(double x)
    {
        return exp(x);
    }
    void solve()
    {
        double delx = (b-a)/ (double) n;
        double sum;
        sum = fx(a) + fx(b);
        for( int i = 1; i < n; i++)
        {
            if(i&1)
            {
                sum += 4*( fx( a+i*delx));
            }
            else
            {
                sum += 2*( fx( a+i*delx));

            }
        }
        cout<<"area is "<<setprecision(6)<<b*sum/3;
    }

};
int main()
{
    Trapezoidal tp;
    cout<<"Give me lower limit and upper limit ";
    cin>>a>>b;
    cout<<endl<<"how many slice you want to do ";
    cin>>n;
    tp.solve();

}






