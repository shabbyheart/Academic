#include<bits/stdc++.h>
using namespace std;

double a,b,arr[100][100];
int n;
class Romberg{
public:
    double f(double x)
    {
        return(1.0/x);
    }
    double trapezoidal(int n)
    {
        double delx  = (b-a) / n;
        double sum = f(a) + f(b);
        for( int i = 1; i < n; i++)
        {
            sum += 2* f( a+ i*delx);
        }
        return .5*delx*sum;
    }
    void solveRomberg()
    {
        for( int i = 1; i<=n; i++)
        {
            arr[i][0] = trapezoidal( pow(2, (i-1)));
        }
        for( int i = 2; i<=n; i++)
        {
            for( int j = 1; j<i; j++)
            {
                arr[i][j] = ( pow(4,j) * arr[i][j-1] - arr[i-1][j-1] )  / ( pow(4,j)-1 );
            }
        }
    }
    void display()
    {
        for( int i=1; i <= n; i++)
        {
            for( int j=0; j < i; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Romberg r;
    cout<<"Enter lower limit and upper limit";
    cin>>a>>b;
    cout<<"Enter the point ";
    cin>>n;
    r.solveRomberg();
    r.display();

}
