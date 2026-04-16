#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,7,5,8,3,6,13};
    int len=sizeof(arr)/sizeof(int);
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }

    system("pause");

    return 0;
}