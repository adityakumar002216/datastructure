#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
cout<<"enter the size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"printing  sum of the array element\n";
for(int i=0;i<n;i++){
    x=x+arr[i];
}
cout<<"sum ="<<x;



return 0;

}
