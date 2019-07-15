#include<bits/stdc++.h>
using namespace std;
class Newton_Interpolation
{
public:

    int i,j,n;
    double x[100],y[100];
    void get_input()
    {
        cin>>n;
        for( i = 0; i < n; i++)
        {
            cin>>x[i]>>y[i];
        }

    }
    double fun(int start,int end)
        {
            if( start == end)
                return y[start];
            if(start+1 == end)
            {
                return (( y[end] - y[start]) / ( x[end] - x[start]));
            }

            return  (fun( start+1 , end) - fun(start, end-1)) / (x[end] - x[start]);
        }
        double funx(int i,double value)
        {
            double temp = 1;
            for(int j = 0; j<i; j++)
            {
                temp *= value - x[j];
            }
             return temp;
        }
        double calculation(double x)
        {
            double fx = 0;
            for( i=0; i <=n; i++)
            {
                fx += (fun(0,i) * funx(i,x));
            }
            return fx;
        }

};
int main()
{
    Newton_Interpolation ob;

    ob.get_input();
    double value;
    cin>>value;
    cout<<fixed<<setprecision(3)<<ob.calculation(value)<<endl;
}
