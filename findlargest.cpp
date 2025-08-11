/*#include <bits/stdc++.h>// largest number
using namespace std;

int sortArr(vector<int> & arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int main()
{
    vector<int> arr1 = {2,5,1,3};
    vector<int> arr2 = {5,3,1,3,4};


    cout<<"the largest element in the arr " << sortArr(arr1)<<endl;
    cout<<"the largest elemen in the array "<<sortArr(arr2);

    return 0 ;
}
*/

/*
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