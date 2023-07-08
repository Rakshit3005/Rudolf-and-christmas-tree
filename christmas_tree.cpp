#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double d,h;
        cin>>n>>d>>h;
        double y[n];
        for(int i=0;i<n;i++)
        {
            cin>>y[i];
        }
        double total=1;
        double a[n-1];
        double area=(double)(d*h)/2;
        double ans=0;
        for(int i=0;i<n-1;i++)
        {
            a[i]=y[i+1]-y[i];
            if(a[i]>=h)
            {
               total++;
            }
            else
            {
                long double z=h-a[i];
                long double g=((double(d)*(double(z*z)))/double(h))/2;
               // cout<<g<<" ";
                 ans+=g;
                // cout<<z<<" ";
                // cout<<ans<<endl;
            }
        }
        //cout<<total<<endl;
        cout<<fixed<<setprecision(7)<<(double)n*area-(double_t)ans<<endl;
    }
    return 0;
}