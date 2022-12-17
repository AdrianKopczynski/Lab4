#include <iostream>
using namespace std;

int szukanie_najwiekszego(int tab[]){
	
}
int main()
{
    int tableCap;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> tableCap;
    int table[tableCap];
    for (int i = 0; i<=tableCap;i++){
    	int temp = 0;
    	cout << "Podaj wartosc dla elementu " << i+1 << " : " <<endl;
    	cin >> temp;
    	cout << endl;
    	table[i] = temp;
	}
	int max= 0;
	for (int i = 0; i<=tableCap;i++){
		if (table[i]>=max){
			max = table[i];
		}
		else{
			continue;
		}
	}
	cout << "Najczesciej wystepujacy element tablicy to " << max ;
	
    return 0;
}
