#include<iostream>
#include<vector>
using namespace std;

int main() {
	int Rownum;
	int Colnum;
	int values;
	cin >> Rownum >> Colnum;
	vector < vector < int > > Grid(Rownum, vector < int >(Colnum));
	for (int Row = 0; Row < size(Grid); Row++) {
		for (int Clo = 0; Clo < size(Grid[Row]); Clo++) {
			cin >> values;
			Grid[Row][Clo] = values;
		}
	}
	for (int Row = 0; Row < size(Grid); Row++) {
		for (int Col = 0; Col < size(Grid[Row]); Col++) {

			cout << " | " << Grid[Row][Col] << " | " << flush;
		}
		cout << " " << endl;
	}

	return 0;
}