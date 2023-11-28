1)Array print
--------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       cout<<a[i];
    }

    return 0;
}
-----------------

2)Array print using for loop with reverse

-----------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cin>>k;
    if(k==1)
    {
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    }
else
{
for(int i=n-1;i>=0;i--)
    {
        cout<<a[i];
    }
}
    return 0;
}
-----------------------------------

3)Array print using while loop with reverse
--------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
      int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cin>>k;
    if(k==1)
    {
  int  i=0;
    while(n--)
    {
        cout<<a[i];
        i++;
    }
    }
else
{

  int i=n-1;
     while(n--)
    {
        cout<<a[i];
        i--;
    }
}
    return 0;
}



4) leap year
--------------------
#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{


      if(n%4==0&&n%100!=0||n%400==0)
        {
             cout<<"Leap year"<<endl;
        }
        else{
            cout<<"Not Leap year"<<endl;
    }

}

int main()
{
    int i,n,m;
    cin>>n;
    solve(n);


   return 0;

}

------------------------
5)Leap year n to m;
--------------------------
#include <bits/stdc++.h>
using namespace std;

void solve(int n,int m)
{
    for(int i=n;i<=m;i++)
    {
      if(i%4==0&&i%100!=0||i%400==0)
        {
             cout<<"Leap year"<<endl;
        }
        else{
            cout<<"Not Leap year"<<endl;

        }
    }

}

int main()
{
    int i,n,m;
    cin>>n>>m;
    solve(n,m);


   return 0;

}
6) prime number
--------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,c=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"Prime number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }


   return 0;

}

---------------------------
7)prime number n to m;
-----------------
#include <bits/stdc++.h>
using namespace std;

void solve(int i)
{
 int    c=0;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"PRIME NUMBER"<<endl;
    }
    else
    {
        cout<<"NOT PRIME NUMBER"<<endl;
    }

}


int main()
{
    int i,n,m;
    cin>>n>>m;
    for(i=n;i<=m;i++)
    {
        solve(i);
    }


   return 0;

}