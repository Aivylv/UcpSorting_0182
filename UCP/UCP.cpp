//SOAL TYPE 2 (B)
//1. Algoritma Bubble Sort membandingkan serta menukar elemen-elemen dengan membuat variabel sementara sebagai media penukaran kemudian elemen-elemen dalam array diuji,
//   jika nilai elemen di indeksAwal lebih besar dari nilai elemen pada indeksAwal+1 maka elemen pada indeksAwal akan dimasukkan ke dalam variable sementara,
//   kemudian elemen pada indeksAwal+1 akan mengisi ke indeksAwal,
//   dan elemen pada variable sementara akan dipindahkan ke dalam indeksAwal+1 tadi.
//   contoh elemen dari indeks 0 yg bernilai 4 dibandingkan dengan elemen dari indeks 1 yg bernilai 3,
//   indeks 0 diuji dengan indeks 1, karena 4>3 maka akan ditukar, 4 dari indeks 0 masuk ke variabel sementara(indeks 0 menjadi kosong),
//   kemudian 3 dari indeks 1 mengisi indeks 0, dan 4 dipindahkan dari variabel kosong ke indeks 1

//2. Algoritma Shell Sort membandingkan serta menukar elemen-elemen dengan cara memecah elemen-elemen tersebut,
//   kemudian diurutkan dengan algoritma insertion sort, setelah itu disatukan atau digabungkan.
//   Biasanya dibagi menjadi tiga bagian terlebih dahulu, kemudian ditukar dengan algoritma insertion sort, dan digabungkan menjadi satu bagian,
//   setelah itu dibagi/dipecah lagi menjadi dua bagian, kemudian diurutkan lagi dengan algoritma insertion sort, dan digabungkan menjadi satu bagian.

//3. Yang akan dipilih adalah algorithma Shell sort, karena jika data hampir berurutan maka akan lebih efisien untuk menggunakan algoritma shell sort.
//   hal ini disebabkan karena shell sort merupakan insertion sort yang versi lebih upgrade,
//   dan juga algoritma ini membantu penukaran elemen agar bisa melangkahi beberaoa step sekaligus untuk pindah posisi,
//   hal itu mengakibatkan jumlah perbandingan yang harus dilakukan lebih berkurang atau lebih sedikit.

//4.
#include <iostream>
using namespace std;

int lyvia[82];
int n;

void input() 
{
	while (true) 
	{
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 82)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 82 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke- " << (i + 1) << ": ";
		cin >> lyvia[i];
	}
}

void display() 
{
	cout << endl;
	cout << "====================" << endl;
	cout << "Elemen Array yang telah tersusun" << endl;
	cout << "====================" << endl;
	for (int j = 0; j < n; j++) 
	{
		cout << "Data Ke- " << j + 1 << ": ";
		cout << lyvia[j] << endl;
	}
	cout << endl;
}
void selectionSortArray()
{							
	int pass = 1;							

	for (pass; pass <= n - 1; pass++) 
	{				
		for (int j = 0; j <= n - 1 - pass; j++) 
		{	
			if (lyvia[j] < lyvia[j + 1]) 
			{					
				int temp = lyvia[j];					
				lyvia[j] = lyvia[j + 1];					
				lyvia[j + 1] = temp;					
			}
		}
	}
}

int main()
{
	input();			
	selectionSortArray();  
	display();			
	return 0;
}

//btw kelas D belum ada activity untuk algoritma Selection Sort!!! hanya algoritma Bubble Sort dan Insertion Sort saja
//Selection sort sama seperti bubble sort dan bedanya bubble itu dari kecil ke besar dan selection dari besar ke kecil
//itu kalau sesuai dengan sepengetahuan yang saya dapat saat mendengarkan penjelasan dosen terkait materi selection sort ini 