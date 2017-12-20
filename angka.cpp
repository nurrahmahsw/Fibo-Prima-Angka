#include<iostream>
using namespace std;

int main(){
    int x, juta, ratusribu, puluhribu, ribu, ratus, puluh, satuan;

    cin>>x;

    juta = x/1000000;
    ratusribu = x%1000000;
    puluhribu = x%100000;
    ribu = x%10000;
    ratus = x%1000;
    puluh = x%100;
    satuan = x%10;

    cout<<juta*1000000<<endl;
    cout<<(ratusribu/100000)*100000<<endl;
    cout<<(puluhribu/10000)*10000<<endl;
    cout<<(ribu/1000)*1000<<endl;
    cout<<(ratus/100)*100<<endl;
    cout<<(puluh/10)*10<<endl;
    cout<<satuan<<endl;
}
