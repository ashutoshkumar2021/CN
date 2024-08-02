/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
using namespace std;

void printRowWiseSum(int brr[][3],int rows,int cols){
    //row sum-> row wise
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+brr[i][j];
        }
        cout<<sum<<endl;
    }
}
void printColWiseSum(int brr[][3],int rows,int cols){
    //col sum-> col wise
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+brr[j][i];
        }
        cout<<sum<<endl;
    }
}

int main()
{
    //declare 2D array
    // int arr[3][3];
    
    // //initialize
    int brr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    //cout<<brr[0][1]<<endl;
    
    // printRowWiseSum(brr,3,3);
    printColWiseSum(brr,3,3);
    
    //row-wise access
    // //outer loop
    // for(int i=0;i<3;i++){
    //     //for every row, we need to print value in each Column
    //     for(int j=0;j<3;j++){
    //         cout<<brr[i][j]<<" ";
    //     }

    // }
    // cout<<"Col wise"<<endl;
    // //col wise access
    // for(int i=0;i<3;i++){
    //     //for every row, we need to print value in each Column
    //     for(int j=0;j<3;j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    // }
    // int arr[4][3];
    // int rows=4;
    // int cols=3;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[j][i];
    //     }
    // }
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
