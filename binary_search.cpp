//Binary_search
#include <bits/stdc++.h>
using namespace std;

int b_search(int arr[],int left,int right,int target){

 int midle=0;
 while(left<=right){
    midle=left+(right-1)/2;

    if(midle==target){
        return midle;

    }
    if(arr[midle]<target){
        left=midle+1;
    }
    else{

        right =midle-1;
    }
 }
    return -1;

 }
int main()
{
int arr[5]={1,2,3,4,5};
int l=0;                          // its left value 
int r=sizeof(arr)/sizeof(arr[0]);// its right value, it should decrease 1.
int t=3;                         // its target value.

int k=b_search(arr,l,r-1,t);

if(k==-1){
    cout<<"can't find"<<endl;
}else {
 cout<<"find"<<endl;
}


    return 0;
}
