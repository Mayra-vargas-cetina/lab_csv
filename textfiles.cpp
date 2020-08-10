// Programa que lee un archivo CSV para texto
// Creado por Cesar Aceros
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//

#include<fstream>
#include <string>
#include <vector>
#include <sstream> 
#include <iostream>
using namespace std;

void parseCSV()
{
    std::ifstream  data("Book1.csv");
    std::string line;
    std::vector<std::vector<std::string> > parsedCsv;
    while(std::getline(data,line))
    {
        std::stringstream lineStream(line);
        std::string cell;
        std::vector<std::string> parsedRow;
        while(std::getline(lineStream,cell,','))
        {
            parsedRow.push_back(cell);
        }

        parsedCsv.push_back(parsedRow);

	}
	
    for (int i=0; i<parsedCsv.size(); i++){ 
        for (int j=0; j<parsedCsv[i].size(); j++){
            cout << parsedCsv[i][j] << "   ";
        }
        cout << '\n';
    }
}


int main()
{
	parseCSV();

	return 0;
}

