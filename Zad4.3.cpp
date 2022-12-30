#include <iostream>
using namespace std;

int main()
{
    int table[10][10];
    for (int i = 0; i<10;i++){
    	table[i][0] = i;
    	table[i][1] = i+i;
    	table[i][2] = i*i;
    	table[i][3] = i+3;
    	table[i][4] = i-4;
    	table[i][5] = 0;
    	table[i][6] = 0;
    	table[i][7] = 0;
    	table[i][8] = 0;
    	table[i][9] = 0;	
	}
	cout << "Zawartosc tablicy: "<<endl<<endl;
	for(int i = 0; i<10;i++){
		for(int x = 0; x<10;x++){
			if(table[i][x]>9 || table[i][x]<0){
				cout << " "<< table[i][x];
			}
			else{
				cout << "  "<< table[i][x];
			}
			
		}
		cout << endl;
	}

    return 0;
}
