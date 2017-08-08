#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;

void SubSeq(string s , int i , int n , string p){
	
	if(i==n){
		cout<<p<<" ";
		return;
	}
	
	SubSeq(s,i+1,n,p);
	SubSeq(s,i+1,n,p+s[i]);
	
}

int main(){
	
	string s = "abc";
	SubSeq(s,0,3,"");
	return 0;
} 
