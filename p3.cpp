#include<bits/stdc++.h>
using namespace std;

int SumArray( int arr[],int i,int j){
  if(i==j)
    //return arr[i];
    if(arr[i]%2==0){
     return arr[i];
    }
    else
     return 0;


    int mid=(i+j)/2;
    int s=SumArray(arr,i,mid)+SumArray(arr,mid+1,j);

    return s;


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
cout<<"Sum of arrays:"<<endl;

cout<<SumArray(arr,0,len-1);

}



