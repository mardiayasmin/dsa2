#include<bits/stdc++.h>
using namespace std;

int Power(int x,int y)
{

    if(y==0)
    {
        return 1;
    }
    else
    {
        int mid=y/2;
        int p= Power(x,mid);
        if(y%2==0)
        {
            return p*p;
        }
        else
        {
            return p=p*p*x;
        }
    }

}

int main()
{

    int arr[]= {5,4,1,9,2,3,15,18};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"power of"<<endl;

    cout<<Power(3,7);

}

