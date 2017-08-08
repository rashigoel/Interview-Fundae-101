#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;

bool Palindrome(string s , int i, int n){
	
	if(i==n) {
		return true;
	}
	
	if(s[i]!=s[n]) return false;
	else return Palindrome(s,i+1,n-1);
	
}

int main(){
	
	string s = "chehc";
	cout<<Palindrome(s,0,4);
	return 0;
} 
