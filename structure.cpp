#include<bits/stdc++.h>
using namespace std;
/*
bool cmp(int a,int b){
if(a>b) return true;
else return false;
}*/
struct age {
 int y,m;
};
bool cmp(age a,age b){
if(a.y>b.y) return true;
else if(a.y==b.y&& a.m>b.m) return true;
else return false;
}

int main(){
/*int arr1[]={10,5,7,-6,-12,7,12};
//sort(&arr1[0],&arr1[7]);
sort(&arr1[0],&arr1[7],cmp);
for(int i=0;i<=6;i++){
    cout<<arr1[i]<<'\t';
}*/
age arr[]={{7,3},{8,3},{7,2}};
sort(&arr[0],&arr[3],cmp);

for(int i=0;i<3;i++){

    cout<<arr[i].y<<" "<<arr[i].m<<endl;
}

return 0;
}
