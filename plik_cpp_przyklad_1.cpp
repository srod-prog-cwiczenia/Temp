#include <fstream>
#include <sstream>

			std::fstream file;
			file.open("D:\\plikplik.txt", std::ios::in);
			if (!file.good()) {
				std::cout << "Nie mozna odczytac pliku " << "D:\\plikplik.txt" << std::endl;
				return;
			}
			std::string line;
			while (std::getline(file, line)) {
				std::vector<std::string> fields;
				std::stringstream ss(line);
				std::string str;
				while (std::getline(ss, str, ';'))
						InfoMsg(AnsiString(str.c_str()));
			}
			file.close();
