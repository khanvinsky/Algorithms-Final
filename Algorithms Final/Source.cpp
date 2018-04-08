//Algorithms and Data Structures (INFR 2820U)
//Final Project
//Pavlo Salimon - 100562122
//Moaz Khan - 100562122

#include <iostream>
#include <fstream>

using namespace std;

// Define a constant for the number of lines to read from network.txt
#define NUM_READ_LINES 40

//functions go here for actual program operation

int readFile() {
	
	// Array of line numbers each line being no more than 100 chars
	char e_arr[NUM_READ_LINES][100];
	int counter = 0;

	// Open our file
	ifstream networkFile("c:\\network.txt", ifstream::in);

	// If we can read/write great
	if (networkFile.good()) {

		// Read throuthe file and load into array
		while (!networkFile.eof() && (counter < NUM_READ_LINES)) {
			networkFile.getline(e_arr[counter], 100);
			counter++;
		}

		// Loop through the array which we just put together
		for (int i = 0; i < counter; i++) {
			cout << e_arr[i] << endl;
		}
	}

	networkFile.close();

	return 0;
}

int main() {

	bool repeat = true;

	while(repeat = true){

		int menuChoice;

		cout << "Please select option" << endl << endl;
		cout << "(1) Build Graph From 'network.txt'" << endl;
		cout << "(2) Change Weight on an Edge" << endl;
		cout << "(3) Remove one Edge from Graph" << endl;
		cout << "(4) Remove one Node from Graph" << endl;
		cout << "(5) Run Bellman-Ford" << endl;
		cout << "(6) Run Kruskal's" << endl;
		cout << "(7) Quit" << endl;
		cin >> menuChoice;

		//menu
		switch (menuChoice) {
			case 1:
				readFile();
				break;
		
			case 2:
				//Build graph
				break;
		
			case 3:
				//Build graph
				break;
		
			case 4:
				//Build graph
				break;
		
			case 5:
				//Build graph
				break;
		
			case 6:
				//Build graph
				break;
		
			case 7:
				//Build graph
				return 0;
		}

	}

}