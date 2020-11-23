
#include<bits/stdc++.h>
using namespace std;
int  prac(int Num)
{
    if(Num==1)
    {
        return Num;
    }
    else
        return Num+prac(Num-1);

}
int main()
{
    int num=prac(5);
     cout<<num;
    return 0;
}
