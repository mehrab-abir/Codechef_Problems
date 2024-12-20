#include <iostream>
using namespace std;

int main() {
	int testCase, minutes;

    cout<<"Number of test cases: ";
	cin>>testCase;

	for(int i=1;i<=testCase;i++){

        cout<<"How many minutes before Chef left: ";
	    cin>>minutes;

	    if(minutes<30){
	        cout<<"NO, He will not be able to reach on time."<<endl;
	    }
	    else{
	        cout<<"YES, he will reach on time\n"<<endl;
	    }
	}
	return 0;
}
