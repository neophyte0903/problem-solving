#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	for (int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    if(x*15>=2*y){
	        std::cout << "YES" << std::endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
