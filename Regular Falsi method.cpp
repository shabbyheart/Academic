#include<bits/stdc++.h>
using namespace std;

#define E 0.0001
double f( double x)
{
    double xx = x*x-4*x-10;
    return xx;
}

class RegularFalsi{
    public:
    void FalsiMethod(double a,double b)
    {
        if( f( a ) * f( b ) >= 0)
        {
            cout<<"Root is not lies in this range"<<endl;
            return;
        }
        double mid,fab;
        int i = 1;
        do{
            double x,y,z;
            x = a * f(b);
            y = b * f( a );
            z = f(b) - f(a);
            mid =  (x-y) / z;
            cout<<"Iteration " << i++ << " Mid root value is "<< mid<<" Function value of root value is " << f(mid)<<endl;
            if( f( mid) == 0)
            {
                cout<<"The root value is "<<mid<<endl;
                return;
            }
            else if( f( a ) * f( mid ) < 0){
                b = mid;
            }
            else
                a = mid;

        fab = fabs( f(mid));
        }while(  fab >= E);
        cout<<"The root value is "<<mid<<endl;
    }
};
int main()
{
    RegularFalsi rl;
    double lower,upper;
    cout<<"give upper lower and upper value corresponding ";
    cin>>lower>>upper;
    rl.FalsiMethod(lower,upper);
}
