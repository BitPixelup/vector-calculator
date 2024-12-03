#include <iostream>


using namespace std;


int main() {

	int i;
	cout << "i component: ";
	cin >> i;

	int j;
	cout << "j component: ";
	cin >> j;

	int k;
	cout << "k component: ";
	cin >> k;

	int modi = i * i;
	int modj = j * j;
	int modk = k * k;

	int finalmodvect = modi + modj + modk;

	cout << "under root " << finalmodvect;

}