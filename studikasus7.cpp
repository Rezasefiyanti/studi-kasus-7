#include <iostream>
#include <string.h>
using namespace std;

class Mahasiswa{
   public:
      void data();
};

typedef struct{
	int nim, telp;
	char nama[10],prodi[20];
}
   mhs;
   mhs mahasiswa[10];
   mhs lok[5];
   mhs temp;
   int n, i, b, j, cari, ada;

void Mahasiswa::data(){
	
	cout<<"==================================================================="<<endl;
	cout<<"                         DATA MAHASISWA                            "<<endl;
	cout<<"==================================================================="<<endl<<endl;

	cout<<"Masukan banyak data = ";
	cin>>n;

	for(i=0;i<n;i++){
	    cout<<endl;
	    cout<<"Data ke-"<<(i+1)<<":"<<endl;
	    cout<<"Masukan Nim Mahasiswa       : ";cin>>mahasiswa[i].nim;
	    cout<<"Masukan Nama Mahasiswa      : ";cin>>(mahasiswa[i].nama);
	    cout<<"Masukan Prodi Mahasiswa     : ";cin>>(mahasiswa[i].prodi);
	    cout<<"Masukan no telpon Mahasiswa : ";cin>>mahasiswa[i].telp;
	    }
		cout<<endl;
		cout<<"=================================================================="<<endl;
	    cout<<"                         Data Mahasiswa                           "<<endl;
	    cout<<"=================================================================="<<endl;
	    for(i=0;i<n;i++){
	    	cout<<"Nim   : "<<mahasiswa[i].nim<<endl;
			cout<<"Nama  : "<<mahasiswa[i].nama<<endl;
			cout<<"prodi : "<<mahasiswa[i].prodi<<endl;
			cout<<"telp  : "<<mahasiswa[1].telp<<endl<<endl;
	        }
        cout<<endl;
cout<<"=========================================================================="<<endl;

          for(i=0;i<n;i++){
             for(j=0;j<n-1;j++){
                if(mahasiswa[j].nim > mahasiswa[j+1].nim){
                	temp.nim=mahasiswa[j].nim;
                    mahasiswa[j].nim=mahasiswa[j+1].nim;
                    mahasiswa[j+1].nim=temp.nim;
	
		          	strcpy(temp.nama,mahasiswa[j].nama);
		          	strcpy(mahasiswa[j].nama,mahasiswa[j+1].nama);
		          	strcpy(mahasiswa[j+1].nama,temp.nama);
		          	
		          	strcpy(temp.prodi,mahasiswa[j].prodi);
		          	strcpy(mahasiswa[j].prodi,mahasiswa[j+1].prodi);
		          	strcpy(mahasiswa[j+1].prodi,temp.prodi);

                	temp.telp=mahasiswa[j].telp;
                	mahasiswa[j].telp=mahasiswa[j+1].telp;
                	mahasiswa[j+1].telp=temp.telp;
                    }
                  }
               }
               cout<<endl;
        cout<<endl;
		
		cout<<"==========================================================="<<endl;
        cout<<"    Setelah data diurutkan berdasarkan nim terkecil       "<<endl;
        cout<<"==========================================================="<<endl<<endl;
        for(j=0; j<n; j++){
            cout<<"Nim     : "<<mahasiswa[j].nim<<endl;
			cout<<"Nama    : "<<mahasiswa[j].nama<<endl;
			cout<<"prodi   : "<<mahasiswa[j].prodi<<endl;
			cout<<"no telp : "<<mahasiswa[j].telp<<endl<<endl;
        }

        cout<<"=========================================================================="<<endl;
        cout<<endl;
        cout<<"Masukan nim mahasiswa Untuk Mencari data : ";
        cin>>cari;
        ada = 0;
        for(j=0; j<n; j++){
            if(mahasiswa[j].nim==cari){
                    ada=1;
                    
					cout<<endl;
					
	    			cout<<"Nim     : "<<mahasiswa[j].nim<<endl;
					cout<<"Nama    : "<<mahasiswa[j].nama<<endl;
					cout<<"prodi   : "<<mahasiswa[j].prodi<<endl;
					cout<<"no-telp : "<<mahasiswa[j].telp<<endl;
                }
            }
            cout<<"=========================================================================="<<endl;
	if (ada == 0){
		cout<<"Data Tidak ditemukan"<<endl;
	}	
}
int main(){
   Mahasiswa mhs ;
   mhs.data();
   return 0;
}
