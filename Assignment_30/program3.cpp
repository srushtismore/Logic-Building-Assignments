#include<iostream>
using namespace std;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x08104040;
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
        cout<<"Bit at location 7th, 15th,21th & 28th is ON";
    }
    else
    {
        cout<<"Bit at location 7th, 15th,21th & 28th is OFF";
    }
}
