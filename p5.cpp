/*
#include <bits/stdc++.h>
using namespace std;

int maxMin(int arr[], int i,int j) {
   if(i==j){
    return (arr[i],arr[i]);
   }
   else{
    int mid=(i+j)/2;
   int max1,min1=maxMin(arr,i,mid);
     int max2,min2=maxMin(arr,mid+1,j);
 int fmax=-1;
int fmin=-1;
if (max1>max2)
fmax=max1;
else
     fmax=max2;

 if(min1>min2)
 fmin=min1;
else
     fmin=min2;

return fmax,fmin;


   }
}
int main() {
    int arr[]={5,4,1,9,2,3,15,18};
    int len=sizeof(arr)/sizeof(arr[0]);
     int res=maxMin(arr,0,len-1);
    cout<<res<<endl;
   // cout<<res.mn<<endl;

}
*/

#include <bits/stdc++.h>
using namespace std;
struct Pair {
    int mx;
    int mn;
};

Pair maxMin(int arr[], int i,int j) {
   if(i==j){
    return {arr[i],arr[i]};
   }
   else{
    int mid=(i+j)/2;
    Pair c1=maxMin(arr,i,mid);
    Pair c2=maxMin(arr,mid+1,j);


    int mx=max(c1.mx,c2.mx);
    int mn=min(c1.mn,c2.mn);
    return{mx,mn};

   }
}
int main() {
    int arr[]={5,4,1,9,2,3,15,18};
    int len=sizeof(arr)/sizeof(arr[0]);
    Pair res=maxMin(arr,0,len-1);
    cout<<res.mx<<endl;
    cout<<res.mn<<endl;

}

