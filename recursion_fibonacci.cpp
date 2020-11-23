#include<bits/stdc++.h>
using namespace std;
int term=10;
int fibo(int preNum,int postNum)
{
    static int i=1;
    if(i==term)
    {
        return 0;
    }
    else
    {
        int result;
        result=preNum+postNum;
        preNum=postNum;
        postNum=result;
        cout<<result<<" ";
        i++;
        fibo(preNum,postNum);
    }
        return 0;
}
int main()
{
    int preNum=0,postNum=1;
    cout<<"1 ";
    fibo(preNum,postNum);
    return 0;
}
