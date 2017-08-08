#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;

bool SubsetSum(int a[] , int i, int n, int sum , int temp){
	
	if(temp==sum) return true;
	else if(temp>sum) return false ;
	
	if(i==n) return false;
	
	return SubsetSum(a,i+1,n,sum,temp) || SubsetSum(a,i+1,n,sum,temp+a[i]); 
	
		
}

int main(){
	
	int a[] = {1,2,3,4,5,6};
	cout<<SubsetSum(a,0,6,21,0);
	return 0;
} 
