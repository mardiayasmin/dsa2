#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> list;
 int x;
 for(int i=0;i<5;i++){
    cin>>x;
    list.push_back(x);
 }
 printf("size: %d\n" ,list.size());
 for(int i=0;i<list.size();i++)
    printf("[%d] %d\n",i,list[i]);
    int i=2;
 list.erase(list.begin()+ i);
 for (int x:list)
    printf("%d\n" ,x);


}
