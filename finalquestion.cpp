//matrix multiplication on arrays with predefined sizes
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    int arr[30][40];
    int arr1[40][50];
    int arr2[30][50];
    int i,j,k;
    for(i =0; i<30; i++)
    {
        for(j=0; j<40; j++)
            arr[i][j]=rand() % 90+10;
    }
    for(i =0; i<40; i++)
    {
        for(j=0; j<50; j++)
            arr1[i][j]=rand() % 90+10;
    }

    for(i=0;i<30;i++){
        for(j=0;j<50;j++){
            for(k=0;k<40;k++)
                arr2[i][j]+=arr[i][k]*arr1[k][j];

        }
    }

     for(i =0; i<30; i++)
    {
        for(j=0; j<50; j++)
            cout<<arr2[i][j]<<" ";
            cout<<endl;
    }





}
