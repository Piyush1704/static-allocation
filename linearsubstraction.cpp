//subtraction of two linear arrays
#include <iostream>
using namespace std;

int main()
{
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
    int arr1[10]={31,32,33,34,35,36,37,38,39,40};
    for(int i=0;i<10;i++)
    {
        arr[i]-=arr1[i];
    }

    for (int j=0;j<10;j++)
    {
        cout<<arr[j]<<" ";
    }

}


