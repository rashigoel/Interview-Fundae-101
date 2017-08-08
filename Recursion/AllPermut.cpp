#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;

void Permute(string s , int l, int r){
	
	if(l==r) cout<<s<<" : ";
	else{
		for(int i=l ; i<=r ; i++){
			swap(s[l],s[i]);
			Permute(s,l+1,r);
			swap(s[l],s[i]);
		}
	}
		
}

int main(){
	
	string p = "ABC";
	Permute(p,0,2);
	return 0;
} 
