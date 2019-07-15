                                #include<bits/stdc++.h>
using namespace std;
double  x[100];
    double y[100];
int i,n;
double sumX()
{
    double temp=0;
    for( i = 1; i <= n; i++)
    {
        temp = temp + x[i];
    }
    return temp;
}
double sumY()
{
    double  temp=0;
    for( i = 1; i <= n; i++)
    {
        temp = temp + y[i];
    }
    return temp;
}
double sumXY()
{
    double temp=0;
    for( i = 1; i <= n; i++)
    {
        temp = temp + ( y[i] * x[i] );
    }
    return temp;
}
double sumXX(){

    double temp=0;
    for( i = 1; i <= n; i++)
    {
        temp = temp + ( x[i] * x[i] );
    }
    return temp;
}
int main()
{
    //int n;
    cout<<"Input number of data points N";
    cin>>n;
    cout<<"Input X and Y values, one set on each line";
    for(int i = 1; i <= n; i++)
    {
        cin>>x[i]>>y[i];
    }
    //cout<<sumX();
    //cout<<sumX()<<" "<<sumY()<<" "<<sumXY()<<" "<<sumXX()<<" ";
    double b = (( n * sumXY() ) - ( sumX() * sumY() ))  /    (( n*sumXX()) - (sumX()*sumX() ));
    double a = (sumY() - (b*sumX()))/n;
    cout<< b<<" "<<a ;

}
