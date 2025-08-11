//small number
#include <bits/stdc++.h>
using namespace std;

int findmin(int arr[],int n)
{
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr2[]= {3,2,5,4};
    int n = 4;

    cout<<"minimum number "<<endl;

    int min= findmin(arr2,n);
    cout<<"smallest number is "<<min;

    return 0;
}
