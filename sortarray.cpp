#include<iostream>
#include<bits+stdc+.h>
using namespace std;
int main()
{
	int arr[]={5,4,3,2,1};
	
int n = sizeof(arr)/sizeof(arr[0]);
sort (arr,arr+n)
for(auto i: arr)
cout<<i<<" ";
return 0;
}
