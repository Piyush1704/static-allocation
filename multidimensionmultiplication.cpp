#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int arr[2][2] = {10,11,12,13,};
    int arr1[2][2] = {14,15,16,17};
    int mult[2][2];
     for(i = 0; i < 2; ++i)
        for(j = 0; j < 2; ++j)
        {
            mult[i][j]=0;
        }
         for(i = 0; i < 2; ++i)
        for(j = 0; j < 2; ++j)
            for(int k = 0; k < 2; ++k)
            {
                mult[i][j] += arr[i][k] * arr1[k][j];
            }
         for(i = 0; i < 2; ++i)
         {


    for(j = 0; j < 2; ++j)
    {
        cout << mult[i][j]<<" ";
    }
        cout<<endl;
         }
}




