#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;

string s[] = { "" , "" ,"abc","def","ghi", "jkl","mno", "pqrs", "tuv", "wxyz"};


void Phone(int a[] , int start, int n, string ans){
	
	if(start==n) {
		cout<<ans<<" ";
		return;
	}
	
	for(int j=0 ; j<s[a[start]].size() ; j++){
		string p = ans;
		char c = s[a[start]][j];
		p = p+c;
		Phone(a,start+1,3,p);	
	}	
	
}

int main(){
	
	int a[] = {4,5,6};
	Phone(a,0,3,"");
	return 0;
} 
