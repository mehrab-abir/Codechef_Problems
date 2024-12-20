#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCase;

    cout<<"Test cases: ";
    cin>>testCase;

    for(int i=1;i<=testCase;i++){
        int totalIncome;

        cout<<"Your total income: ";
        cin>>totalIncome;

        if(totalIncome > 100){
            cout<<"You get = "<<totalIncome-10<<endl;
        }
        else{
            cout<<"You get = "<<totalIncome<<endl;
        }
    }
}
