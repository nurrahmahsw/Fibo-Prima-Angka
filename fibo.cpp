#include<iostream>
using namespace std;

int fungsi(int n){
    if(n<2){
            return n;
    }else{
        return fungsi(n-1)+fungsi(n-2);
    }
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
       cout<<fungsi(i)<<" ";
    }
    cout<<endl;
}
