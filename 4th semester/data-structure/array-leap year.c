//array reverse order or serial order
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100],i,d;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 1 to 4 number for see different output :-\n");
    printf("1 and 3 for serial order\n");
    printf("2 and 4 for reverse order\n");
    printf("Enter number Which output you want to see : ");
    scanf("%d",&d);

    if(d == 1)
    {
        for(i=0; i<n; i++)
        {
            printf("%d\t",arr[i]);
        }

    }
    else if(d == 2)
    {
        printf("\nReverse order\n");

        for(i=n-1; i>=0; i--)
        {
            printf("%d\t",arr[i]);
        }
    }
    else if (d == 3)
    {
        i=0;
        while(i<=n)
        {
            printf("%d\t",arr[i]);
            i++;
        }

    }
    else if(d == 4)
    {
        printf("\nReverse order\n");
        i=n-1;
        while( i>=0 )
        {
            printf("%d\t",arr[i]);
            i--;
        }
    }
    return 0;
}


// leap year code done by c++

#include <iostream>

using namespace std;

int main()
{
    int year,d;
    cout << "Code For Leap Year" << endl;
    cout<<"Enter Year : "<<endl;
    cin>>year;
    
    
    ((year % 4 ==0 && year % 100 != 0) || year % 400 == 0) ? cout<<"Leap Year"<<endl : cout<<"Not leap Year"<<endl ;
    
    
    return 0;
}