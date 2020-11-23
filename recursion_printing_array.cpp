#include<bits/stdc++.h>
using namespace std;

void arrayPrinting(int arr[],int start,int ending)
{
    if(start>=ending)
    {
        return;
    }


        else
        {
           cout<<arr[start]<<" ";
        arrayPrinting(arr,start+1,ending);
        }



}
int main(){
    int arr[100],size;
    int start=0;

    cout<<"Input Array Element Number : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    arrayPrinting(arr,start,size);


return 0;
}
