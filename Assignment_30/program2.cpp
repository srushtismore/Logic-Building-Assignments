#include<iostream>
using namespace std;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00020010;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return(iResult == iMask);

}

int main()
{
    UINT iValue = 0;
    bool bRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == 1)
    {
        cout<<"Bit at location 5th & 18th is ON";
    }
    else
    {
        cout<<"Bit at location 5th & 18th is OFF";
    }
}
