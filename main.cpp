#include <iostream>
#include <string>
using namespace std;


void phonebookProperties()
{
	const int rows = 10;
	const int columns = 3;

	string phonebook[rows][columns] = {
		{"John Smith"			,"+201155531153"		,"23, Moustfa Kamel St, Port Said"							},
		{"Samantha Wallace"		,"+201255535514"		,"96 Ahmed Orabi St., MOHANDESEEN"							},
		{"Andrew McLaughlin"	,"+201155561845"		,"48-50 Abdel Khalek Sarwat"								},
		{"Luke Johnson"			,"+201155557108"		,"1 El Hegaz Sq. Mohandeseen"								},
		{"Jessie Williams"		,"+201055529268"		,"New Borg El Arab Second Industrual Zone, P.O. Box: 74247"	},
		{"Dick Lincoln"			,"+201255566576"		,"8 A Tomanbay St. El-zeitoun, El-zeitoun"					},
		{"Alexander Sherwin"	,"+201055599133"		,"160 Ahmed Abou Soliman-Siouf"								},
		{"Zach Franklin"		,"+201055515057"		,"Badr City, Km 47 Road Cairo-Suez"							},
		{"Amanda Washington"	,"+201155534336"		,"67 Emtedad Ramsis 2 Bldgs., Nasr City"					},
		{"Lucy Davidson"		,"+201055560776"		,"34/36 Mossadak St., Dokki"								}
	};
}

void search()
{
	string searchTerm;
	getline(cin, searchTerm);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

		}
	}

}

int main()
{
	



}
