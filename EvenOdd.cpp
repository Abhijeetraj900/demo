#include<iostream>
using namespace std;

int expo(int n)
{
    if(n==0)
    {
        return 1;
    }

    int smallprob = expo(n/2);
    if(n&1)
    return smallprob*smallprob*2;
    else
    return smallprob * smallprob;
}

int main()
{

    cout<<"ans is "<<expo(10)<<endl;
    return 0;
}