//C++ code for finding the longest common prefix

#include<bits/stdc++.h>
using namespace std;

// function to find common prefix between two strings
string commonPrefix(string s1,string s2)
{
string commonPfix="";

int n1=s1.length();
int n2=s2.length();

for(int i=0,j=0;i<n1 &&j<n2;i++,j++)
{
if(s1[i]!=s2[j])
{
break;
}

//commonPfix.push_back(s1[i]);

commonPfix=commonPfix + s1[i];
}

return commonPfix;
}

//finctuon to find longest common prefix using divide and conquer approach
string longestCommonPrefix(string arr[],int low_idx,int high_idx)
{
string ans;
if (low_idx == high_idx)
{
    return (arr[high_idx]);
}


if (high_idx > low_idx)
{

      int mid = low_idx + (high_idx - low_idx) / 2;

      //conquering for subproblems

      string s1 = longestCommonPrefix(arr, low_idx, mid);
      string s2 = longestCommonPrefix(arr, mid+1, high_idx);

      //common prefix between s1 and s2
      //; using the result of subproblems for finding final ans
      string ans=commonPrefix(s1, s2);// longest common prefix
      return ans;
}
}

//driver code

int main()
{
string arr[4]={"coding","codingNinjas","codingSkill","codingEra"};

cout<<"Longest common prefix is : "<<longestCommonPrefix(arr,0,3);
}
