// largest number 
#include <bits/stdc++.h>
using namespace std;

int findlargestelement(int arr[], int n)
{
    int max = arr[0];
    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }

    }

    return max;
}

int main()
{
    cout<<"largest element program"<<endl;
    int arr1[] = {2,5,3,4,1};
    int n = 5;
    int max = findlargestelement( arr1, n);

    cout<<"the largest element in the array is: "<< max<<endl;
}
*/

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
