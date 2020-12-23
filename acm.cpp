#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
typedef long long ll;
int main()
{
    long long i,j,n,k,t,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
       ll a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       ll fs=0;
       for(i=0;i<n-2;i++)
       {
        if(s[i]==1)
       {
           fs++;
       }
       if(s[i+1]==1)
       {
           i++;
           if(s[i+2]==1)
           {
               i++;
           }

       }
       }
       cout<<fs<<endl;



    }


return 0;
}
