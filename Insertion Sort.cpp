#include<iostream>
using namespace std;

int main(){
	int a,b,kunci, x,n,arr[100];

	cout<<"program insertion sort "<<endl;
	cout<<"========================\n"<<endl;
	cout<<"banyak angka yang akan diurutkan :  ";
    cin>>n;
    for(int t=0;t<n;t++){

            cout<<"Angka ke- " <<t+1<<" : ";
            cin >> arr[t];
        }

    for (a = 1; a < n; a++) {
        kunci = arr[a];
        x = a - 1;

        while (x >= 0 && arr[x] > kunci) {
            arr[x + 1] = arr[x];
            x = x - 1;
        }
        arr[x + 1] = kunci;
    }
	cout<<"\n\nhasil angka yang sudah diurutkan :\n"<<endl;
    for (a=0;a<n;a++){
        cout<<arr[a]<<"  ";
    }
}
