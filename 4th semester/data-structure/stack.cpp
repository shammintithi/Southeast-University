#include<bits/stdc++.h>
using namespace std;
#define n 3
int arr[n];
int top =-1;
void push(int x)
{
    if(top==n-1)
        cout<<"Already Full"<<endl;

    else{
        top++;
        arr[top]=x;
        cout<<"Pushed value "<<x<<endl;

    }

}
void pop()
{
    if(top==-1)
    {
        cout<<"Stact Empty";
    }
    else{
      cout<<"Poped value"<<arr[top]<<endl;
        top--;
    }

}
void print()
{
    for(int i =0;i<=top-1;i++)
    {
        cout<<"After a operation "<<arr[i]<<" "<<endl;
    }
}
void isEmpty()
{
    if(top==-1)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
void Top()
{
    cout<<"Top Element is :"<<arr[top]<<endl;
}
int main()
{
 isEmpty();
 print();
 push(10);
 Top();
 isEmpty();
 print();
 push(3);
 print();
 push(10);
 push(5);
 Top();
 isEmpty();
 pop();
 pop();
 pop();
 pop();

 return 0;
}