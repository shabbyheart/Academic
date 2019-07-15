#include<bits/stdc++.h>
using namespace std;

int main()
{
    double arr[100][100] , x[100] = {0};
    int n,i,j,t=1;
    cin>>n;
    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n+1; j++ )
        {
            cin>>arr[i][j];
        }
    }

    for( t=1; t<=8; t++)
    {
        for( i = 1; i <= n; i++ )
        {
            double temp = 0;
            for( j = 1; j <= n; j++ )
            {
                if( i != j )
                {
                    temp = temp +  ( arr[i][j] * x[j] );
                }
            }
            temp = ( arr[i][n+1] - temp);
            temp = temp / arr[i][i];
            x[i] = temp;
        }
    }

    cout<<endl;

    for( i = 1; i <= n; i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}
