#include <iostream>
using namespace std;
int main()
{int i,j,k,n;
 cout <<  "Enter Size = "<< endl;
 cin>>n;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
   cout<<"* ";
   cout<<endl;
 }cout<<endl;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
   cout<<j;
   cout<<endl;
 }cout<<endl;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
   cout<<i;
   cout<<endl;
 }cout<<endl;
 for(i=1;i<=n;i++)
 {for(j=1;j<=i;j++)
   cout<<j;
   cout<<endl;
 }cout<<endl;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
   if(i==1||j==1||i==n||j==n)
   cout<<"* ";
   else
   cout<<"  ";
   cout<<endl;
 }cout<<endl;
for(i=2;i<=n+1;i++)
 {for(j=i;j<=n;j++)
  cout<<" ";
  for(k=1;k<i;k++)
  cout<<k;
  cout<<endl;
 }cout<<endl;
for(i=1;i<=n;i++)
 {for(j=i;j<=n;j++)
  cout<<j;
  for(k=1;k<i;k++)
  cout<<k;
  cout<<endl;
 }cout<<endl;k=1;
 for(i=n;i>=1;i--)
 {for(j=n;j>i;j--)
  cout<<" ";
  for(k=1;k<=i;k++)
  cout<<k;
  cout<<endl;
 }cout<<endl;k=1;
 for(i=1;i<=n;i++)
 {for(j=1;j<i;j++)
  cout<<" ";
  for(k=i;k<=n;k++)
  cout<<k;
  cout<<endl;
 }cout<<endl;
 k=n;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
   if(i==j||j==k)
   cout<<"*";
   else
   cout<<" ";
   cout<<endl;k--;
 }cout<<endl;
 for(i=2;i<=n+1;i++)
 {for(j=i;j<=n;j++)
  cout<<" ";
  for(k=1;k<i;k++)
  cout<<"*";
  for(k=2;k<i;k++)
  cout<<"*";
  for(j=i;j<=n;j++)
  cout<<" ";
  cout<<endl;
 }cout<<endl;
 k=n;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
  {if(j>=k)
   cout<<"* ";
   else
   cout<<" ";
  }
  k--;cout<<endl;
 }
 for (i=1; i<= n ; i++)
  {for (j = i; j < n ; j++) 
   cout<<" ";
   for (k = 1; k <= (2*i -1) ;k++) 
    {if( k==1 || i == n || k==(2*i-1)) 
     cout<<"*";
     else 
     cout<<" ";
    }
   cout<<endl;
  }
  k=n;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
  {if(j>=k)
   cout<<"* ";
   else
   cout<<" ";
  }
  k--;cout<<endl;
 }
 for(i=2;i<=n;i++)
 {for(j=1;j<i;j++)
  cout<<" ";
  for(k=i;k<=n;k++)
  cout<<"*"<<" ";
  cout<<endl;
 }cout<<endl;
 return 0;
}