#include<iostream>
using namespace std;
int binary_search(int arr[],int low,int high,int key)
{
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid+1;
    }
    else
    {
        if(key<arr[mid])
        {
            return binary_search(arr,low,mid-1,key);
        }
        else
        {
            return binary_search(arr,mid+1,high,key);
        }
    }
}

int main()
{
    int n;
    int key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key to find:"<<endl;
    cin>>key;
       
    int low=0;
    int high=n;
    
    cout<<"position of element in an array"<<endl;
    cout<<binary_search(arr,low,high,key);
   
}

OUTPUT:

7
12
23
34
45
56
67
78
enter the key to find:
67
position of element in an array
6