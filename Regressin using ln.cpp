#include<bits/stdc++.h>
using namespace std;

class Regration_ln
{
public:

    double x[100],y[100];
    int n,i,j;

    double sumx()
    {
        double temp = 0;
        for( i = 0; i < n; i++)
        {
            temp += 2.303*log10(x[i]);
        }
        return temp;
    }
    double sumy()
    {
        double temp = 0;
        for( i = 0; i < n; i++)
        {
            temp += 2.303*log10(y[i]);
        }
        return temp;
    }
    double sumxy()
    {
        double temp = 0;
        for( i = 0; i < n; i++)
        {
            temp += 2.303*log10(x[i]) * 2.303*log10(y[i]);
        }
        return temp;
    }
    double sumxx()
    {
        double temp = 0;
        for( i = 0; i < n; i++)
        {
            temp += pow(2.303*log10(x[i]),2);
        }
        return temp;
    }

    void getInput()
    {
        for( i = 0; i <n; i++)
        {
            cin>>x[i]>>y[i];
        }

    }
    void calculation()
    {
        double b = (( n* sumxy()) - ( sumx()*sumy()))  / (( n * sumxx())  - (sumx() *sumx()));
        double a = (sumy() - (b * sumx())) / n;
        cout<<a<<endl;
        cout<<b;
    }

};
int main()
{
    Regration_ln ob;
    cin>>ob.n;
    ob.getInput();
    ob.calculation();
}
