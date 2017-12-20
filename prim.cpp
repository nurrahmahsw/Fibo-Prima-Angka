#include<iostream>
using namespace std;

int a;
int prima(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            a++;
        }
    }
return a;
}

int main(){
    int a, c;
    bool test = false;

    cin>>a;


    for(int i=0; i<a; i++){
        c=prima(a);
        if(c==0&&a!=1){
            test=true;
        }
    }

    if(test){
        cout<<"bilangan prima"<<endl;
    }else{
        cout<<"bukan"<<endl;
    }

}
