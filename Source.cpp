#include <fstream>
using namespace std;

int main() {
	int x = 4;
	int y = x * x;
	ofstream fout;
	fout.open("text.txt");
	fout << x << " * " << x << " = " << y << endl;
	fout.close();
	return 0;
}