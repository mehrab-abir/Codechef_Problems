#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Test Case: ";
    cin>>t;

    for(int i=1;i<=t;i++){
        int X,Y;

        cout<<"Prize money for top 10 rankers: ";
        cin>>X;

        cout<<"Prize money for ranks 11-100: ";
        cin>>Y;

        cout<<"Total prize money: "<<X*10+Y*90<<endl;
    }
}
