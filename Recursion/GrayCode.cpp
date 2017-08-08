#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;

vector<int> v;

void GrayCode(int x){
	
	if(x==1){
		v.push_back(0);
		v.push_back(1);
		return;
	}
	GrayCode(x-1);
	vector<int> r = v;
	reverse(r.begin(),r.end()); 
	
	for(int i=0 ; i<r.size() ; i++){
		r[i]+=pow(2,x-1);
	}
	
	v.insert(v.end(),r.begin(),r.end());
	
}

int main(){
	
	int x = 3;
	GrayCode(x);
	for(int i=0 ; i<v.size() ; i++)
	cout<<v[i]<<" ";
	return 0;
} 
