#include <iostream>

using namespace std;
int main (){
    int a=0;
    cout<<"Masukkan sebuah angka : ";
    cin>>a;

        if(a>0){
            cout <<"Bilangan POSITIF !!!"<<endl;
            if(a%2==0){
            cout<<a<<" adalah Bilangan Genap !!!"<<endl;

        }else{
            cout<<a<<" adalah Bilangan Ganjil !!!"<<endl;
        }
    }else if (a==0){
        cout<<"Bilangan NOL"<<endl;
    }else {
        cout<<"Bilangan Negatif"<<endl;
    }


return 0;
}

