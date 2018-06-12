#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int arr[5][10][10];
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++)
                arr[i][j][k]=rand()%90+10;
        }
        }
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++)
                cout<<arr[i][j][k]<<" ";
                cout<<endl;
        }
            cout<<endl;
    }
   /*  for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++)
                cout<<arr[i]<<" ";
                cout<<endl;
        }
            cout<<endl;
    }*/
}
