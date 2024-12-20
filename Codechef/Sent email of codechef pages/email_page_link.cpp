#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin>>A>>B;

    string prac = "https://www.codechef.com/practice";
    string cont = "https://www.codechef.com/contests";
    string disc = "https://discuss.codechef.com";

    if(A==1 && B==1){
        cout<<disc<<endl;
    }
    else if(A==1 && B==0){
        cout<<cont<<endl;
    }
    else if(A==0 && B==1){
        cout<<prac<<endl;
    }
    else if(A==0 && B==0){
        cout<<prac<<cont<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
