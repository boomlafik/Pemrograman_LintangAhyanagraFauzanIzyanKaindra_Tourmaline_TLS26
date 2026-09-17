#include <iostream>

using namespace std;

int main() {
	
	int n, k;
	cout << "Masukkan banyaknya astronot: ";
	cin >> n;
	cout << "Masukkan nilai eliminasi: ";
	cin >> k;
	
	int smntr = 0;
	int sisa = n;
	int ast[n];
	
	for (int i = 0; i < n; i++) {
		ast[i] = i + 1;
	}
	
	cout << endl << "Astronot yang tereliminasi: ";
	
	while (sisa != 1) {
		int jln = 1;
		while (jln < k) {
			smntr = (smntr + 1) % n;
			if (ast[smntr] != 0) {
				jln++;
			}
		}
		
		cout << ast[smntr] << " ";
		if (ast[smntr] % 2 == 0) {
			k += 2;
		} else {
			k -= 1;
		}
		if (k < 2) {
			k = 2;
		}
		
		ast[smntr] = 0;
		sisa--;
		
		if (sisa > 1) {
			do {
				smntr = (smntr + 1) % n;
			} while (ast[smntr] == 0);
		}
	}
	
	cout << endl << "Astronot yang terpilih adalah astronot ke-";
	
	for (int i = 0; i < n; i++) {
		if (ast[i] != 0) {
			cout << ast[i] << endl;
			break;
		}
	}
	
	return 0;
	
}
