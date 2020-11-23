#include<bits/stdc++.h>
using namespace std;

void arrayMaxNum(int arr[],int start,int ending,int temp)
{
     if(start>=ending)
     {
         cout<<"Max Number Is : "<<temp;
         return;
     }

   else
        {

         if(arr[start]>temp)
    {
        temp=arr[start];

    }
        arrayMaxNum(arr,start+1,ending,temp);
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
    int temp=arr[0];

    arrayMaxNum(arr,start,size,temp);


return 0;
}
