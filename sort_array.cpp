#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={100,512,6,724,31,14,2,0};
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++)
    printf(" %d" ,arr[i]);
  printf("\n");

  sort(arr,arr+len);

  for(int i=0;i<len;i++)
    printf(" %d" ,arr[i]);
   printf("\n");
   return 0;






}
