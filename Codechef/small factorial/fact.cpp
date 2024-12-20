#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;

	for(int i=1;i<=T;i++){
	    int j=1,n,fact=1;

        cin>>n;

        do{
            fact=fact*j;
            j++;
        }while(j<=n);

        cout<<fact<<endl;
    }
	return 0;
}
