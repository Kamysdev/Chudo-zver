#include <iostream>
#include <cmath>

class Gauss {
public:

	Gauss();
	Gauss(int size);

	int sloveSLAU();
private:
	int** matrix;

	void findPref();
	void multiplyString();
	void swapString();
	void addToString();
	void removeEmptyString();
	void removeDoubleString();
};


Gauss::Gauss()
{
	matrix = new int* [3];
	for (int i = 0; i < 3; i++) {
		matrix[i] = new int[3 + 1];
		for (int j = 0; j < 3 + 1; j++) {
			matrix[i][j] = (rand() % 9);
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

Gauss::Gauss(int size)
{
	matrix = new int* [size];
	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size + 1];
		for (int j = 0; j < size + 1; j++) {
			matrix[i][j] = (rand() % 9);
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

int Gauss::sloveSLAU()
{
	removeEmptyString();
	removeDoubleString();


	return 0;
}

void Gauss::findPref()
{
}

void Gauss::multiplyString() {

}

void Gauss::swapString() {

}

void Gauss::addToString() {

}

void Gauss::removeEmptyString() {

}

void Gauss::removeDoubleString() {

}

int main(int argc, char** argv) {
	srand((unsigned int)time(NULL));

	int size;
	std::cout << "Enter size of matrix: ";
	std::cin >> size;

	Gauss SLAU(size);


	return 0;
}