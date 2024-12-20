#include <iostream>
using namespace std;

int main() {
	int N;
	cout<<"Test Case: ";
	cin>>N;

	for(int i=1;i<=N;i++){
	    int X,Y,Z;
	    cout<<"Three Numbers: ";
	    cin>>X>>Y>>Z;

	    if((X>Y) && (X<Z) || (X<Y) && (X>Z)){
	        cout<<X<<" is the second maximum number."<<endl;
	    }
	    if((Y>X) && (Y<Z) ||(Y<X) && (Y>Z)){
	        cout<<Y<<" is the second maximum number."<<endl;
	    }
	    if((Z>X) && (Z<Y) || (Z<X) && (Z>Y)){
	        cout<<Z<<" is the second maximum number."<<endl;
	    }
	}
	return 0;
}

