#include<bits/stdc++.h> 
using namespace std;
// #define int long long
 
class Totalsum{
public:
	int sum = 0;
	void calc(int num){
		for(int i=1;i<=num;i++){
			sum+=i;
		}
	}
	void display(){
		cout<<sum<<"\n";
	}

};


int main(){

	int t=1;
	// cin>>t;
	while(t--){
			int n;
			cin>>n;
			Totalsum solve;
			solve.calc(n);
			solve.display();
		}
	return 0;
}
