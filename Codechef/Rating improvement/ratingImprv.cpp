#include <iostream>
using namespace std;

int main() {
	int T;
	cout<<"Test Case: ";
	cin>>T;

	for(int i=1;i<=T;i++){
	    int X,Y;

	    cout<<"Current rating: ";
	    cin>>X;
	    cout<<"Difficulty of current problem: ";
	    cin>>Y;

	    if((Y>=X) && (Y<=X+200)){
	        cout<<"yes, it was recommended"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
