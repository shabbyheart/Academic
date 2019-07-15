#include<bits/stdc++.h>
using namespace std;
double arr[100][100],previous[100],current[100];
class Jacobi{
public:
    void Jacobi_Method(int n)
    {
        for( int it = 1; it<=4; it++)
        {
            for( int i = 1; i <= n; i++)
            {
                double sum = 0;
                for( int j = 1; j <= n+1; j++)
                {
                    if( i != j)
                    {
                        sum +=  arr[i][j] * previous[j];
                    }
                }
                sum = arr[i][n+1] - sum;
                sum = sum / arr[i][i];
                current[i] = sum;
            }
            for( int k = 1; k<=n; k++)
            {
                previous[k] = current[k];
            }
        }

    }

};
int main()
{
    Jacobi jb;
    cout<<"how many variable: ";
    int n;
    cin>>n;
    for( int i = 1; i <= n; i++)
    {
        for( int j = 1; j <= n+1; j++)
        {
            cin>>arr[i][j];
        }
    }

    jb.Jacobi_Method(n);

    cout<<endl<<" Value of X1 X2 X3 ";
    for( int i =1 ; i <= n; i++)
    {
        cout<< current[i]<<endl;
    }
}
