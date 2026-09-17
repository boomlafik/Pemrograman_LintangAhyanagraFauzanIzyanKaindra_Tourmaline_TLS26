#include <iostream>

using namespace std;

int main() {
	
	int n;
	cout << "Masukkan banyaknya huruf: ";
	cin >> n;
	char kata[n];
	cout << "Masukkan kata (Kapital): ";
	cin >> kata;
	
	cout << "Hasil kata sandi: " << kata[0];
	
	int i = 1;
	while (i < n) {
		int nilai_sblm = kata[i-1] - 'A' + 1;
		int nilai_skrng = kata[i] - 'A' + 1;
		int nilai_baru = nilai_sblm + nilai_skrng;
		
		if (nilai_baru > 26) {
			nilai_baru -= 26;
		}
		
		char huruf_baru = nilai_baru - 1 + 'A';
		cout << huruf_baru;
		
		i++;
	}
	
	return 0;
	
}
