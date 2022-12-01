#include<bits/stdc++.h> 
using namespace std;
// #define int long long
 
class decTobin{
public:
	string str = "";

	void DtoB(int n){
		while(n > 0){
			if(n&1){
				str+='1';
			}
			else str+='0';
			n>>=1;
		}
		reverse(str.begin(),str.end());
	}
	
	void display(){
		cout<<str<<"\n";
	}

};


int main(){

	int t=1;
	// cin>>t;
	while(t--){
			int n;
			cin>>n;
			decTobin solve;
			solve.DtoB(n);
			solve.display();
		}
	return 0;
}
