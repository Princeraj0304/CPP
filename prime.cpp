#include <iostream>
using namespace std;
int main(){

    
    int count=0;
    int n;

    cout<<"Enter your number ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            count++;
        }

    }
    if(count==2){
        cout<<"Prime";
    }
    else{
        cout<<"Not prime ";
    }

    
}