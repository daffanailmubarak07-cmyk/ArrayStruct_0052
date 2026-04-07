#include <iostream>
using namespace std;

int main(){
    //Deklarasi Array dengan inisialisasi 
    int dataku[5]= {10,20,30,40,50};
    //deklarasi tannpa inisialisasi 
    int datamu[5];
    int x;
    //cara membaca array dataku 
    cout << "Data ke -3 : " << dataku[2]*2 <<endl;

   

//menampilkan datamu dg perulangan for
//menampilkan datamu dg perulangan for
    for (int i = 0; i <= 4; i++)
   {
    cout << "data ke - " << i + 1 << " : " << datamu[i] <<endl;
   }
}
