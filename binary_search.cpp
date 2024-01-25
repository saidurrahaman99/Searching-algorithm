//Binary_search
// array should be sort in order before applying binary search.
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



// STL for binary_search.
// need to sort array
// stl structure
/*binary_search(startaddress, 
              endaddress, valuetofind)
Returns :
true if an element equal to valuetofind is found, else false.
*/

#include <bits/stdc++.h>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    sort(a, a + asize);
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

        getch();

    return 0;
}

