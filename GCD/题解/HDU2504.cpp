#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
	return b?gcd(b,a%b):a;
}
int main(){
	int n;
	ll a,b,c;
	scanf("%d",&n);
	while(n--){
		scanf("%lld%lld",&a,&b);
		for(c=b+1;c<=a*b;c++){
		   	if(b==gcd(a,c)) break; 
		}
		printf("%lld\n",c);
} 
  return 0; 
}
