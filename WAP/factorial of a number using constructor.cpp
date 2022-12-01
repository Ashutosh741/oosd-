#include<bits/stdc++.h> 
using namespace std;
// #define int long long
 
class factorial{
public:
	int fact = 1;
	void calc(int num){
		for(int i=1;i<=num;i++){
			fact*=i;
		}
	}
	void display(){
		cout<<fact<<"\n";
	}

};


int main(){

	int t=1;
	// cin>>t;
	while(t--){
			int n;
			cin>>n;
			factorial solve;
			solve.calc(n);
			solve.display();
		}
	return 0;
}
