#include<iostream>
using namespace std;

int CountOdd( int arr[],int i,int j){
  if(i==j)
    if(arr[i]%2!=0)
    return 1;

   else
    return 0;

    int mid=(i+j)/2;
    int c1=CountOdd(arr,i,mid);
    int c2=CountOdd(arr,mid+1,j);
    return c1+c2;


}
int main(){
     int a;
     cin>>a;
     int arr[a];

     for(int i=0;i<a;i++){
          cin>>arr[i];
     }

//int arr[]={5,4,1,9,2,3,15,18};
int len=sizeof(arr)/sizeof(arr[0]);
cout<<"Number of Odd Numbers:" <<endl;
cout<<CountOdd(arr,0,len-1);



}

