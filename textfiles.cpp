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
            parsedRow.push_back(cell); // por medio de push back se agregan los valores dentro del vector, el push back va a agregando un valor al final del vector//

        }

        parsedCsv.push_back(parsedRow);

	}
	 // inicialmente lo hice de forma manual esto era introducir las variables una por una quiere decir sin extraer del archivo.exe//
     // luego lo pense de forma dinamica, esto se puede hacer recorriendo  los vectores directamente desde el archivo.exe//
    for (int i=0; i<parsedCsv.size(); i++){   // En este primer for lo que hacemos es recorrer el tamaño del primer vector, este primer vector son  las columnas//
        for (int j=0; j<parsedCsv[i].size(); j++){// En el segundo for lo que hacemos es recorrre el tamaño del segundo vector, este segundo vector  son las filas//
            cout << parsedCsv[i][j] << "   "; // finalmente hago la iteracion entre j Y i, aqui se imprimen tanto filas como columnas//
        }
        cout << '\n';
    }
}


int main()
{
	parseCSV();

	return 0;
}

