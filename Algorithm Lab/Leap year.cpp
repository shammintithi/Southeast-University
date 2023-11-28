#include <bits/stdc++.h>
using namespace std;

void solve(int n,int m)
{
    for(int i=n;i<=m;i++){
      if(i%4==0&&i%100!=0||i%400==0){
            cout << i << " ";
        }
    }
}

int main()
{
    int i,n,m;
    cin>>n>>m;
    cout<<"Leap Years between 1900 and 1940 are: ";
    solve(n,m);
    
    return 0;
}