#include<iostream>
using namespace std;
int main(){
    int a,n,temp,arr[100];
    
    cout<<"program selection sort "<<endl;
    cout<<"========================\n"<<endl;
	cout<<"banyak angka yang akan diurutkan : ";
    cin>>n;
    for(int j=0;j<n;j++){

            cout<<"Angka ke- " <<j+1<<" : ";
            cin >> arr[j];
        }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\nhasil angka yang sudah diurutkan :\n";
    for(a=0;a<5;a++){
        cout<<arr[a]<<" ";
    }
}
