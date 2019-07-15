#include<bits/stdc++.h>
using namespace std;
double arr[100][100];
 void print(int n)
 {
        for( int i = 0; i < n; i++)
        {
            for ( int j = 0; j <= n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
 }
class Gauss{
public:
    int i,j,k;
    void solve( int  n)
    {
        for( i = 0; i < n-1; i++)
        {
                double temp = 0;
                int best_row;

                /// pivoting start;
                for( j = i; j < n; j++)
                {
                    if( temp < fabs( arr[j][i] ) )
                    {
                        temp = arr[j][i];
                        best_row = j;
                    }
                }
                if( best_row != i )
                {
                        for( j = i; j <= n; j++)
                        {
                            swap( arr[i][j] , arr[best_row][j] );
                        }
                }
                if( fabs( arr[i][i] < .000001))
                {
                    cout<<"No solution";
                    return ;
                }
                ///pivoting end;

                /// divide i'th row by ith row and ith coulume value;
                temp = arr[i][i];
                for( j = i; j <= n; j++)
                {
                    arr[i][j] = arr[i][j]/temp;
                }

                double temp2;
                for( k = i+1; k < n; k++)
                {
                        temp2 = arr[k][i];
                        for( j = i; j <= n; j++)
                        {
                             temp = arr[i][j] * temp2;
                             arr[k][j] = arr[k][j] - temp;
                        }
                }

        }///first for loop of i;

        for( i = n-1; i>=0; i--)
        {
            double temp = 0;

            for( j = i+1; j < n; j++)
            {
                temp += arr[i][j] *arr[j][n];
            }

            temp = arr[i][n] - temp;
            arr[i][n] = temp / arr[i][i];
        }
    }
};
int main()
{
    Gauss ge;
    int n;
    cin>>n;
    for( int i = 0; i < n; i++)
    {
        for ( int j = 0; j <= n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    print(n);
    ge.solve(n);
    for( int  i = 0; i<n; i++)
    {
        cout<<" X "<<i<<" = "<<arr[i][n]<<endl;
    }
}
