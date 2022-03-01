#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int e) // n = number of elements in array, e = element to be searched
{
    int start = 0, end = n-1, mid; 
    while(start <= end)
    {
        mid= (start + end)/2 ;
        if (arr[mid] == e) 
            return mid; 

        else if (arr[mid] > e) 
            end = mid - 1;    //element lies in the left

        else if (arr[mid] < e) 
            start = mid + 1;  //element lies in the right
    }
    return -1; //if element doesn't exist in the array
}
int main()
{
    //input to be given in the form of:
    //              number of elements in the array
    //              array
    //              element to be found

    int n; //number of elements in the array
    cin>>n;
    int arr[n]; //initialisation of the array of elements
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int e; //element to be found
    cin>> e;
    int index = BinarySearch(arr, n, e);
    cout<< index; //outputs index of the element in the array
    return 0;
}
