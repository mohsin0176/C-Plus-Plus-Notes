#include<iostream>
using namespace std;
int main()
{
    int num,originalNum,remainder,result=0;
    cin>>num;
    originalNum=num;37
    while(originalNum !=0)
    {
        remainder=originalNum%10;
        result+=remainder*remainder*remainder;
        originalNum/=10;

    }
    if(result==num)
    {
        cout<<num<<"  is Armstrong Number";
    }
    else
    {
        cout<<num<<"  is not Armstrong Number";
    }
    return 0;
}
