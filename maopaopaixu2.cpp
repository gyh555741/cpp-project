#include <iostream>
using namespace std;
void bubbleSort(int *arr,int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={3,6,1,8,9,2,4,7,5};
    int len=sizeof(arr)/sizeof(int);
    bubbleSort(arr,len);
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");

    return 0;
}