#include <iostream>
using namespace std;

int main()
{
    int tableCap;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> tableCap;
    int table[tableCap],tempTable[2][tableCap];
    for (int i = 0; i<tableCap;i++){
    	int temp = 0;
    	cout << "Podaj wartosc dla elementu " << i+1 << " : " <<endl;
    	cin >> temp;
    	cout << endl;
    	table[i] = temp;
    	tempTable[0][i] = temp;
    	tempTable[1][i] = 0;
	}
	for (int y = 0; y<tableCap;y++){
		for (int x = 0; x<tableCap;x++){
			if (table[y]==tempTable[0][x]){
				tempTable[1][y] += 1;
			}
			else{
				continue;
			}
		}
	}
	int max = 0;
	for (int i = 0; i<tableCap;i++){
		if (tempTable[1][i]>=max){
			max = table[i];
		}
		else{
			continue;
		}
	}
		cout << "Najczesciej wystepujacy element tablicy to " << max;
    return 0;
}
