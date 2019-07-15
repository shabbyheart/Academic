/// 0 1 6
#include<bits/stdc++.h>
using namespace std;
#define E  0.000001
double a,b;
int n;
class Trapezoidal{
public:

    double fx(double x)
    {
        return 1/(1+x*x);
    }
    double trape(int n)
    {
        double delx = (b-a)/n;
        double sum;
        sum = fx(a) + fx(b);
        for( int i = 1; i < n; i++)
        {
            sum += 2*( fx( a+i*delx));
        }
        return .5*delx*sum;
    }
    void solve( )
    {
        double result = 0.0, pre_result = 0.0;
        while(1)
        {
            result = trape(n);
            cout<<endl<<"Area is : "<<result<<" When N is " << n<<endl;
            if( abs( result - pre_result) <= E)
            {
                break;
            }
            pre_result = result;
            n = n+5;
        }
        cout<<endl<<"Final result is " << result<<endl;

    }

};
int main()
{
    Trapezoidal tp;
    cout<<"Give me upper limit and lower limit ";
    cin>>a>>b;
    cout<<endl<<"how many slice you want to do ";
    cin>>n;
    tp.solve();

}





