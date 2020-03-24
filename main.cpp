#include <iostream>

using namespace std;

string stringSort(string s)
	{
		string napis;
		int dlugosc = napis.length();
		
		 for(int i=0; i<dlugosc-1; i++)
   			{
        		for(int j=0; j<dlugosc-1; j++)
        			{
           				 if(napis[j]<napis[j+1])
           					{
                				char litera = napis[j];
                				napis[j] = napis[j+1];
                				napis[j+1] = litera;
           					}
					}
			}
//	cout<<napis;		
	
	return napis;
	}

int main(int argc, char** argv) {
	
	 cout << stringSort("Ala");
	 
	return 0;
}
