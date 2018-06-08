#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {10,11,12,13,};
    int arr1[2][2] = {14,15,16,17};
    for (int i=0;i<2;i++)
        {
        for(int j=0;j<2;j++)
            {
                arr[i][j]-= arr1[i][j];
            }
        }

        for (int i=0;i<2;i++)
        {
        for(int j=0;j<2;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }

}




